#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(void)
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        cout<<t;
        for(int i=1;i<=n;i++)
        {
            cout<<i<<"h"<<endl;
            if(s[i]=='G' && s[i-1]=='B')
            {
              s[i-1]='G';
              s[i]='B';
              i++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
