#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d,e=0,f=0,g=0,h=0,total=0,len;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;

        a=count(s.begin(),s.end(),'S');
        b=count(s.begin(),s.end(),'W');
        c=count(s.begin(),s.end(),'E');
        d=count(s.begin(),s.end(),'N');
        if(a>0)
        {
            if(e == 0)
            {
                total+=5*a;
                e++;
            }else
            {
                total+=(1*a);
            }
        }
        if(b>0)
        {
            if(f == 0)
            {
                total+=5*b;
                cout<<total<<"S"<<endl;
                f++;
            }else
            {
                total+=(1*b);
            }
        }
        if(c>0)
        {
            if(g == 0)
            {
                total+=5*c;
                g++;
            }else
            {
                total+=(1*c);
            }
        }
        if(d>0)
        {
            if(h == 0)
            {
                total+=5*d;
                h++;
            }else
            {
                total+=(1*d);
            }
        }
        cout<<total<<endl;
        total=0;

    }

    return 0;

}
