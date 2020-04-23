#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    char a;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[0]))
            break;
        else
            a = toupper(s[0]);
            swap(a,s[0]);
    }
    cout<<s;


    return 0;
}
