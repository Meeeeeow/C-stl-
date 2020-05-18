#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void sorting(int arr[],int s);
int binary(int arr[],int s,int targets);
int temp=0,target;
int main()
{

    int n;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sorting(arr,n);
    cout<<target<<" is present in :"<<binary(arr,n,target)<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
void sorting(int arr[],int s)
{
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }

    }

    return;
}
int binary(int arr[],int s,int t)
{
    int l=0,r=s-1;
    int mid;
    while (l<=r)
    {
        mid=l+(r-l)/2;

        if(arr[mid]==t)
            return mid;
        if(arr[mid]<t)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}

