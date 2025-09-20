#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, num;
    cin >>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    int m, q;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> q;
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), q);
        if (v[low - v.begin()] == q)
            cout << "Yes " << (low - v.begin() + 1) << endl;
        else
            cout << "No " << (low - v.begin() + 1) << endl;
    }   
    return 0;
}
