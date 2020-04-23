#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(void)
{
    queue<char>tiffin;

    int n,t,x,flag=0;
    cin>>n>>t;
    char temp,a,c;
    for(int i=1;i<n+1;i++)
    {
        char a;
        cin>>a;
        tiffin.push(a);
    }
       while(!tiffin.empty())
       {


                   if(flag == t)
                   {
                       break;
                   }
                   flag++;
           c=tiffin.front();
           tiffin.pop();
           temp=tiffin.front();
           tiffin.pop();
           if(c == 'B' && temp =='G')
           {

                   tiffin.push(temp);
                   tiffin.push(c);
           }else{
               tiffin.push(c);
               tiffin.push(temp);

           }

          }
    while(!tiffin.empty())
    {
        cout<<tiffin.front();
        tiffin.pop();
    }


    return 0;
}
