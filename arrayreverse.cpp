#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(void)
{

    int n;
    int numbers[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<numbers[i]<<" ";
    }
    return 0;
}
