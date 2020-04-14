#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int arr[4];

int maxfunction(int arr[]);

int main(void)
{

    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    cout<<maxfunction(arr);
}
int maxfunction(int arr[])
{
    int max=arr[0];
    for(int i=0;i<=2;i++)
    {
       if(max<arr[i+1])
       {

           max=arr[i+1];
       }


    }
    return max;


}
/*#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    return max(max(a,b),max(c,d));
}

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;

    return 0;
}*/
