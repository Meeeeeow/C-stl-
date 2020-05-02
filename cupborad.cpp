#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l[n],r[n];
    for(int i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];

    }
    int a,b,c,d;
    a =count(l,l+n,0);
    b=count(l,l+n,1);
    c =count(r,r+n,0);
    d=count(r,r+n,1);
    if(a>=b && c>=d)
        cout<<b+d<<endl;
    else if(a>=b && c<=d)
        cout<<b+c<<endl;
    else if(a<=b && c>=d)
        cout<<a+d<<endl;
    else if(a<=b && c<=d)
        cout<<a+c<<endl;
    return 0;
}
