#include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    int main()
    {


        vector<int>v;
        int n;
        cin>>n;

            for(int i=0;i<n;i++)
            {
                int a=i;
                v.push_back(a);
            }

        for(int i=0;i<n;i++)
            cout<<v[i];

        return 0;
    }
