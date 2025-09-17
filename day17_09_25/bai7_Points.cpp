#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void equation(int *a,int *b) 
{
   int sum, value_abs;
   sum = *a + *b;
   value_abs = abs(*a - *b);
   *a = sum;
   *b = value_abs;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a, b;
    cin>>a>>b;
    equation(&a, &b);
    cout<<a<<endl;
    cout<<b<<endl;
    
    return 0;
}
