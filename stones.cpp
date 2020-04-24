#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    long n,i=0,flag=0;

    cin>>n;
    char s[n];
    for(long i=0;i<n;i++)
    {
        cin>>s[i];
    }
    while(n--)
    {


        if(s[i]==s[i+1])
        {

            flag++;
        }
        i++;
        if(n==0)
            break;

    }
    cout<<flag<<endl;
    return 0;
}
