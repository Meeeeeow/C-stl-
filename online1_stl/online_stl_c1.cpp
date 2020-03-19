
#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int n,b;
    double a;
    string name;
    map<string,double>mp;
    vector<string>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>name>>a;
        mp[name] = a;
        v.push_back(name);
    }
    for(int i=0;i<n-1;i++)
    {
       for(int j =0;j<n-1;j++)
       {
           if(mp[v[j]]<mp[v[j+1]])
           {
               swap(v[j+1],v[j]);
           }


       }

    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<endl;


    return 0;
}
