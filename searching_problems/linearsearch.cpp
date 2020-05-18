//Linear search
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,k,flag=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k )
           {
              cout<<k<<" is found at position "<<i<<" of the array"<<endl;
              flag++;

           }
           if(i==(n-1)&& flag==0)
           {
               cout<<k<<" is not present in the array."<<endl;
           }

    }
    return 0;
}
//The time complexity of above algorithm is O(n).
