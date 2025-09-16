#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
       cout<<a;
    } else if (b> a && b > c && b > d)
    {
        cout<<b;
    } else if (c> a && c > b && c > d)
    {
        cout<<c;
    } else
    {
        cout<<d;
    }
    return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int max = max_of_four(a, b, c, d);
    
    return 0;
}
