#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    cin>>q;
    map<string,int>m;
    while(q--){
        int type;
        cin>>type;
        string s;
        cin>>s;
        if(type == 1)
        {
            int marks;
            cin>>marks;
            auto it=m.find(s);
            if(it!=m.end())
            {
                m[s]+=marks;
            }
            else
            {
                m.insert(make_pair(s,marks));
            }
        }
        if(type == 2)
        {
            m.erase(s);
        }
        if(type == 3)
        {
            if(m.find(s)!=m.end())
            {
                cout<<m[s]<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
    return 0;
}
