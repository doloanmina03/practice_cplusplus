#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

void ltrim(string &s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !isspace(ch);
    }));
}

void delete_quotes(string &s) {
    if (s.size() >= 2 && s.front() == '"' && s.back() == '"') {
        s.erase(s.begin());
        s.pop_back();
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    
    cin >> n >> q;
    
    vector<string> tag_stack;
    map<string, string> attrs;
    
    cin.ignore();
    
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        
        if (line[1] != '/') {
            string tag;
            size_t position = 1; // Start from position 1 to ignore the tag opening '<'

            // Capture the tag name:
            while (position < line.size()) {
                // If a space or '>' is found, the tag name is complete
                if (line[position] == ' ' || line[position] == '>') break;
                tag += line[position++]; // The increment is performed after the character is added
            }

            tag_stack.push_back(tag); // Add the tag to the stack

            string path = tag_stack[0];
            
            // Create the tag path:
            for (int j = 1; j < tag_stack.size(); j++) path += ("." + tag_stack[j]);
            
            // Create a substring considering only the attributes and their values
            string attributes = line.substr(position, line.length() - position - 1); // Exclude the closing '>'
            ltrim(attributes);
            
            // Assign the attributes to the path
            attrs[path] = attributes;
        } else {
            tag_stack.pop_back();
        }
    }
    
    for (int i = 0; i < q; ++i) {
        string query;
        getline(cin, query);

        size_t tilde = query.find('~');
        string path = query.substr(0, tilde);
        string attr = query.substr(tilde + 1);

        if (attrs.count(path)) {
            string tag_attrs = attrs[path];
            size_t position = tag_attrs.find(attr);

            if (tag_attrs.find(attr) != string::npos && (position == 0 || isspace(tag_attrs[position - 1]))) {
                string value;
                position += attr.length() + 3; // Skip ' = '

                // Capture the value of the attribute:
                while (position < tag_attrs.length() && tag_attrs[position] != ' ') value += tag_attrs[position++];

                delete_quotes(value);

                cout << value << endl;
            } else {
                cout << "Not Found!" << endl;
            }
        } else {
            cout << "Not Found!" << endl;
        }
    }
    return 0;
}
