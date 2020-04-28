#include<bits/stdc++.h>
#include <iostream>

using namespace std;
int main()
{
   int n,q,l,r,a,b=0,sum=0,c=0,d;
   cin>>n;
   int s[n];
   stringstream ss;
   for(int i=0;i<n;i++)
   {
       cin>>s[i];
   }
   cin>>q;
   int found;
   string s1,temp;
   for(int i=0;i<q;i++)
   {
       cin>>s1;
       ss<<s1;
       while( !ss.eof())
       {
           ss>>temp;

           if(temp[0] == 48)
           {
               stringstream(temp)>>found;

                l=found/10;
                r=found%10;

                b=r-l;
                c=b;

                int split[b];
                for(int i=l;i<=r;i++)
                {
                    split[b]=s[i];

                    b--;
                }
                for(int i=c;i>=0;i--)
                {
                    sum+=pow(2,i)*split[i];
                }
                cout<<sum%3<<endl;
           }
           else if(temp[0] == 49)
           {
               stringstream(temp)>>found;

               l=found%10;


                   if(s[l] == 0)
                   {
                       s[l]=1;
                   }
           }
       }
       ss.clear();
       b=0;
       sum=0;
       c=0;

   }
    return 0;
    }
