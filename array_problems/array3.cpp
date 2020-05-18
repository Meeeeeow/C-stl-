//find k largest elements and second largest
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
    sort(arr,arr+n,greater<int>());
    /*second largest er jnne cout<<arr[k-1];*/
    int j=0;
    cout<<arr[0]<<" ";
    c++;
    for(int i=0;i<n;i++)
        {
            if(arr[0]!=arr[i])
            {
                cout<<arr[i]<<" ";
                c++;
                if(c==k)
                    break;
            }
        }

    return 0;
}

