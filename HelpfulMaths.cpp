#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int len,a,b,c;
    char s[101];
    cin>>s;
    len =strlen(s);
    a=count(s,s+len,'1');
    b=count(s,s+len,'2');
    c=count(s,s+len,'3');
    while(a--)
    {
        cout<<"1";
        if(a==0 && b==0 &&c == 0)
            break;
        else
            cout<<"+";
    }

    while(b--)
    {
        cout<<"2";
        if(b==0&&c == 0)
            break;
        else
            cout<<"+";
    }
     while(c--)
    {
        cout<<"3";
        if(c==0)
            break;
        else
            cout<<"+";

    }
    return 0;
}
