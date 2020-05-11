#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

    long long int n,k=0,t,a,b,c,d,e,f,g,h,j;
    cin>>t;
    vector<int>v;
    int arr[10]={1,2,3,4,5,6,7,8,9};
    while(t--)
    {
        cin>>n;
        j=n;
        v.push_back(j);
        for(int i=0;i<10;i++)
        {

                if(v[0]== 0)
                {
                    v.pop_back();
                    k=0;
                    break;
                }
                if(v[0]>10000)
                {
                    v.pop_back();
                    k=0;
                    break;
                }



                a=v[0]/1000;
                if(a!=0)
                {
                  a=a*1000;
                  k++;

                }
                b=v[0]/100%10;
                if(b!=0)
                {
                    b=b*100;
                    k++;
                }
                c=v[0]/10%10;
                if(c!=0)
                {
                    c=c*10;
                    k++;
                }
                d=v[0]%10;
                if(d!=0)
                {
                    k++;
                }
                cout<<k<<endl;
                if(a!=0)
                    cout<<a<<" ";
                if(b!=0)
                    cout<<b<<" ";
                if(c!=0)
                    cout<<c<<" ";
                if(d!=0)
                    cout<<d<<" ";

                cout<<endl;
                v.pop_back();
                 k=0;
                break;

            }


    }
    return 0;
}
