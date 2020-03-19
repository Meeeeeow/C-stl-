#include<iostream>
#include<map>
#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int n,a,id,sub;
    string  name;
    cin>>n;
    map<int,string>mp;
    for(int i =0;i<n;i++)
    {
        cin>>a>>name;
        mp[a] = name;
    }
    while(1)
    {
        cin>>id;
        int count =0;
        if(mp.find(id)!= mp.end())
        {
            //cout<<mp[id].size();
            for(int i =0;i<mp[id].size();i++)
            {
                if(mp[id][i] == 'a'|| mp[id][i]=='e'||mp[id][i]=='i'||mp[id][i]=='o'||mp[id][i]=='u')
                    count++;
            }
            //cout<<count;
            if((mp[id].size()-count) <= count )
            {
                cout<<"BEAUTIFUL";
            }
            else
                cout<<"NOT BEAUTIFUL";
        }
        else
            cout<<"NO STUDENT RECORD AVAILABLE";
    }
    return 0;
}
