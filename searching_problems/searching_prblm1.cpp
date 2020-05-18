//find the single missing number in array method-1
/*
problem:
1.if n is large it will surpass execution time  o(n)
2.only works if range is from 1 to n*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(int arr[],int s);
int total =0,sum=0;
int main()
{
    cout<<5/2;
    return 0;
}
int solve(int arr[],int s)
{
    total=(s+1)*(s+2)/2;
    for(int i=0;i<s;i++)
        total-=arr[i];
    return total;
}
