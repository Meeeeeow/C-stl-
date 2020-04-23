#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    long long n,a;
    int flag=0;
    cin>>n;
    while(true)
    {
        a=n%10;
        n/=10;
        if(a == 7 || a == 4)
        {
            flag++;
        }
        if( n == 0)
            break;
    }
    if(flag == 7 ||flag == 4)
        cout<<"YES";
    else
        cout<<"NO";


    return 0;
}
