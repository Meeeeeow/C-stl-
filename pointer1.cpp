#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void getsecond(long *ptr);
double getAverage(int *arr,int size);
int main(void)
{
    long sec;
    getsecond(&sec);

    cout<<"second is:"<<sec<<endl;

    int n;
    cin>>n;
    int balance[n];
    for(int i=0;i<n;i++)
    {
        cin>>balance[i];
    }
    cout<<"ans "<<getAverage(balance,5)<<endl;

    return 0;
}
void getsecond(long *ptr)
{
    *ptr=time(0);
    return;
}
double getAverage(int *arr,int size)
{
    double sum=0;
    double avg;
    cout<<arr<<endl;
    for(int i=0;i<size;i++)
    {

        cout<<arr[i]<<"f"<<endl;
    }
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    avg = sum/size;
    return avg;
}

