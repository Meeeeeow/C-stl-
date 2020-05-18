//print the elements which have at least 2 greater elements
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,c=1;

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n,greater<int>());
    /*second smallest er jnne cout<<arr[k-1];*/
    int j=0;
    for(int i=n;i>2;i--)
        {
            cout<<arr[i-1]<<" ";
        }
    return 0;
}
