//Separate 0s and 1s from a given array of values 0 and 1(method-1)
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
    for(int i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}
void solve(int arr[],int s)
{
    int count=0;
    for(int i=0;i<s;i++)
    {
        if(arr[i]==0)
            count++;
    }
        int j=0;
        int a = count;
    while(count--)
        {
            arr[j]=0;j++;
        }
    for(int i=a;i<s;i++)
        arr[i] = 1;
    return;

}
