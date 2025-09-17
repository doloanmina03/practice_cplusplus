#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct NewType{
 int age; 
 string first_name;
 string last_name;
 int standard;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    NewType a;
    cin >> a.age >> a.first_name >> a.last_name >> a.standard;
    cout << a.age << " " << a.first_name << " " << a.last_name << " " << a.standard;
       
    return 0;
}
