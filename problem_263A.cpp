#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(void)
{
    int arr[5][5],c,d;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j] == 1)
            {
                i++;
                j++;
                c=abs(3-i);
                d=abs(3-j);
                c+=d;
                break;
            }

        }
    }
    cout<<c<<endl;

    return 0;
}
