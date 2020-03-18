#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main(void)
{
    int n,marks,type;
    vector<int>v;
    string name;
    map<string,int>mp;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>type>>name;
        if(type == 1)
        {
            cin>>marks;
            mp[name]+=marks;

        }
        if (type ==2)
            mp.erase(name);
        if(type ==3)
        {
            if(mp[name]== 0)
                cout<<0<<endl;
            else
                cout<<mp[name]<<endl;
        }

    }
    return 0;
}
