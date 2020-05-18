//find the single missing number in array method-1
/*
problem:
1.longer execution time
2.only works if range is from 1 to n
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(int arr[],int s);
int total =0,d=1;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The missing number from "<<arr[0]<<" to "<<arr[n-1]<<" is "<< solve(arr,n);
    return 0;
}
int solve(int arr[],int s)
{
    total=1;
    for(int i=2;i<=s+1;i++)
        {
            total+=i;
            //cout<<total<<d<<endl;
            total-=arr[i-2];
            //cout<<total<<d++<<endl;
        }
    return total;
}
