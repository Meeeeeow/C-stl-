#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,a=0,m,flag=0,i=2,counter;
    cin>>n>>m;
    a=n+1;
    while(true)
    {
        counter =0;
        for(int i=2;i<=a/2;i++)
        {
            if(a%i == 0)
                counter++;
        }
        if(counter == 0)
        {
            if(m == a )
            {
                cout<<"YES"<<endl;
                break;
            }else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(a == m)
        {
            cout<<"NO"<<endl;
            break;
        }
        a++;
    }
    return 0;
}
