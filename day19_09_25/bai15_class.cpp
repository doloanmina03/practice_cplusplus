#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

class Student
{
    private:
        int age;
        string firstName;
        string lastName;
        int standard;
    public:
        void set_age(int a)
        {
            age = a;
        }
        int get_age()
        {
            return age;
        }

        void set_first_name(string fName)
        {
            firstName = fName;
        }
        string get_first_name()
        {
            return firstName;
        }

        void set_last_name(string lName)
        {
            lastName = lName;
        }
        string get_last_name()
        {
            return lastName;
        }

        void set_standard(int s)
        {
            standard = s;
        }
        int get_standard()
        {
            return standard;
        }

        string add_str()
        {
            stringstream str_to_str;
            str_to_str << age << "," << firstName << "," << lastName << "," << standard;
            return str_to_str.str();
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int age, standard;
    string first_name, last_name;
    cin >> age >> first_name >> last_name >> standard;

    Student s;
    s.set_age(age);
    s.set_standard(standard);
    s.set_first_name(first_name);
    s.set_last_name(last_name);

    cout << s.get_age() <<endl;
    cout << s.get_last_name() << ", " << s.get_first_name() <<endl;
    cout << s.get_standard() << endl;
    cout << "\n";
    cout << s.add_str();
    return 0;
}
