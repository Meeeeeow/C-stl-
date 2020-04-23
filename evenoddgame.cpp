#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2 != 0)
        cout<<"Ehab"<<endl;//jdi n odd hoi tahole dhorlm n=5 mahboub ke a<n choice korte hbe r she choice korbe even so n(odd)-a(even) =odd .ehad wins
    else
        cout<<"Mahmoud"<<endl;//jdi n even hoi tahole mahmoud er turn r she a =n nile n-a = 0 hbe . r n=0 hole lose.so mahboub jite jabe


    return 0;
}
