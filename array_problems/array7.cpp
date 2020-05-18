//find the next greater elements of the array elements
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n,less<int>());
    for(int i=0;i<n;i++)
    {
        a=count(arr,arr+n,arr[i]);
        b=i+a;
        if(i!=(n-1))
             cout<<"next  greater element of "<<arr[i]<<" is : "<<arr[b]<<endl;
        else
            cout<<arr[i]<<" is the greatest in the array\n";


    }

    return 0;
}
