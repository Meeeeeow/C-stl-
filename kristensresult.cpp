#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Student{
private:
     int scores[5],total=0;

public:
    void input()
    {
        for(int i=0;i<5;i++)
            cin>>scores[i];
    }
    int calculateTotalScore()
    {
       for(int i=0;i<5;i++)
            total+=scores[i];
       return total;
    }
};
int main()
{
    int n,count=0;
    cin>>n;
    Student *s=new Student[n];
    for(int i=0;i<n;i++)
    {
        s[i].input();
    }
    int kristens_score=s[0].calculateTotalScore();
    for(int i=1;i<n;i++)
    {
        int total=s[i].calculateTotalScore();
        if(total>kristens_score)
            count++;
    }
    cout<<count<<endl;

    return 0;
}
