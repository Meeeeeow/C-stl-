#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int len,a,b,c;
    char s[101];
    cin>>s;
    len =strlen(s);
   for(int i=0;i<len;i=i+2)
   {

       for(int j=0;j<len;j=j+2)
       {
           if(s[i]<s[j])
            swap(s[i],s[j]);

       }

   }
    cout<<s<<endl;
    return 0;
}
