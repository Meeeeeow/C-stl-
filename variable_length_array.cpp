#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(void)
{
    int n,q,k,i,j;
    int a,b;

    cin>>n>>q;
    vector<int>v[n];
    for(int i=0;i<n;i++)
    {
        cin>>k;
        for(int j=0;j<k;j++)
        {
            int a;
            cin>>a;
            v[i].push_back(a);
        }


    }
    for(int i=0;i<q;i++)
    {
        cin>>a>>b;
        cout<<v[a][b]<<endl;

    }



    return 0;
}
