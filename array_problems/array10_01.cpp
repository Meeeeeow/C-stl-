//Separate 0s and 1s from a given array of values 0 and 1(method-1)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}

