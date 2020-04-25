#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string n1,n2,rs;
    cin>>n1>>n2;
    for(int i=0;i<n1.size();i++)
    {
        if(n1[i] == n2[i])
        {
            rs+='0';
        }
        else
        {
            rs+='1';
        }
    }
    cout<<rs;
    return 0;
}
