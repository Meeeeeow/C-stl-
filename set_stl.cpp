#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n,type,x;
    cin>>n;
    set<int>set_test;
    set<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>type>>x;
        if(type == 1)
        {
            set_test.insert(x);
        }
        else if(type ==2)
        {
            set_test.erase(x);
        }
        else{
            it = set_test.find(x);
            if(*it == x)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}

