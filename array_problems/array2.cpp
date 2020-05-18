//Find 3 largest elements
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,a,first,second,third,b=0;
    first=second=third=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

    for(int i=0;i<n;i++)
    {
        if(first<arr[i])
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if(second<arr[i])
        {
            third=second;
            second=arr[i];
        }
        else if(third<arr[i])
            third=arr[i];

    }
    cout<<first<<" "<<second<<" "<<third;



    return 0;
}
