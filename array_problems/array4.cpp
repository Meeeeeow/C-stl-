//find smallest and second smallest elements and second largest
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,k,a,b,c=0;

    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n,less<int>());
    /*second smallest er jnne cout<<arr[k-1];*/
    cout<<"First smallest element: " <<arr[0]<<endl;
    cout<<"Second smallest element: " <<arr[1]<<endl;
    return 0;
}

