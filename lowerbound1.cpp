#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,check,value;

    cin>>n;
    int lowerbound[n];
    for(int i =0;i<n;i++)
        cin>>lowerbound[i];
    vector<int>v(lowerbound,lowerbound+n);
    vector<int>::iterator low;
    sort(v.begin(),v.end());
    cin>>check;
    for(int i=0;i<check;i++)
    {
        cin>>value;
        low =lower_bound(v.begin(),v.end(),value);


           if(v[low-v.begin()]==value)
           {
               cout<<"Yes"<<" "<<low-v.begin()+1;

           }
           else{
                cout<<"No"<<" "<<low-v.begin()+1;
           }

    }
    return 0;
}

