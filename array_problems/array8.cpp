#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];


    for(int i=0;i<n;i+=2)
    {
            if(i>0 && arr[i-1]>arr[i])
               {
                    swap(arr[i],arr[i-1]);

               }
               if(i<=n-2 && arr[i+1]>arr[i])
               {

                       swap(arr[i],arr[i+1]);

               }


    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
