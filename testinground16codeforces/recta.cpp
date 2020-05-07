#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  int t,a,b,c,d;
  cin>>t;
  while(t--)
  {
      cin>>a>>b;
      cin>>c>>d;
      if(a+c == b && b == d || a+d == b && b==c|| b+c == a && a ==d || b+d == a && c==a)
        cout<<"Yes"<<endl;
      else
        cout<<"No"<<endl;

  }

}


