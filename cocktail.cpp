#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,juice;
    double total=0,avgvolume=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>juice;
        total+=juice;
    }
    avgvolume=total/n;
    cout<<fixed<<setprecision(12);//jdi floating point er por 0 rakhte chai  tahole fixed kore set precision dilei hoi tahoel output er moto orm zero ashbe
    cout<<avgvolume<<endl;

    return 0;
}
