#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{

    vector<int>v;
    int n,p;

    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++)
    {

        cout<<v[i]<<" ";
    }
    return 0;
}
