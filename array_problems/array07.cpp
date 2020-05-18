//find the next greater element in an unsorted array
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

    for(int i=0;i<n;i++)
    {
        a=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(a<arr[j])
            {
                cout<<"Greater element of "<<arr[i]<<" is : "<<arr[j]<<endl;
                break;
            }
        }
    }

    return 0;
}

