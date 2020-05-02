#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(int arr[],int s);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve(arr,n);

    return 0;
}
void solve(int arr[],int s)
{
    int min=arr[0];
    int max=arr[0];
    int flag=0;
    for(int i=0;i<s;i++)
    {
        if(arr[i]<min)
            {
                min=arr[i];
                flag++;
            }
        if(max<arr[i])
        {
            max=arr[i];
            flag++;
        }

    }

    cout<<flag;
}
