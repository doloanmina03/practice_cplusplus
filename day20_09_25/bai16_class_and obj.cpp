#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student 
{
    public:
        int scores[5];
        int sum = 0;
        void input() 
        {
            for (int i = 0; i < 5; i++) 
            {
                cin >> scores[i];
            }
        }
        int calculateTotalScore() 
        {
            for (int i = 0; i < 5; i++) 
            {
                sum = sum + scores[i];
            }
            return sum;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, kristen_score, dem; // so hs
    cin>>n;
    Student *sum_stu = new Student[n]; // mang co n hs
    
    for (int i = 0; i < n; i++)
    {
        sum_stu[i].input();
    }
    kristen_score = sum_stu[0].calculateTotalScore(); // score kristen_ firstline
    
    dem = 0;// dem so hs >kristen
    for (int i = 1; i < n; i++)
    {
        int score = sum_stu[i].calculateTotalScore();
        if (score > kristen_score)
        {
            dem = dem +1 ;
        }
    }
    cout <<dem;
    return 0;
}
