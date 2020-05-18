//find the one missing number in array from any range
/*
problem:
1.longer execution time

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(vector<int>arr,int s);
int total =0,missing;
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    cout<<"The missing number from "<<arr[0]<<" to "<<arr[n-1]<<" is "<< solve(arr,n);
    return 0;
}
int solve(vector<int>arr,int s)
{

    for(int i=1;i<s;i++)
        {
           if(i%2!=0)
           {
            total=(arr[i-1]+arr[i])/2;
            if(arr[i-1]!=total)
                missing=total;
           }
           if(i%2==0)
           {
                total=(arr[i-1]+arr[i])/2;
                if(arr[i-1]!=total)
                    missing=total;
           }
        }
    return missing;
}

