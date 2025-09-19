#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

vector<int> parseInts(string str){
    // Complete this fuction
    vector<int> arr;
    stringstream ss(str);
    int a;
    char ch;
    
    while (ss>>a)
    {
        arr.push_back(a);//
        ss>>ch;//
    }
    return arr;  
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string str;
    cin>>str;
    vector<int> arr = parseInts(str);
    for (int i = 0; i < (int) arr.size(); i++)
    {
        cout<< arr[i] <<endl;
    }
    
    return 0;
}
