#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, b, c, d;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }  
    cin >> b >> c >> d;
    arr.erase(arr.begin() + b - 1);
    arr.erase(arr.begin() + c - 1, arr.begin() + d - 1);
    
    int size = arr.size();
    cout << size << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
