#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,flag=0,minindex,maxindex;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];

            maxindex=i;


        }
        if(min>=arr[i])
        {
            min=arr[i];

            minindex=i;

        }

    }

     if(maxindex>minindex)
     {
         cout<<maxindex-1+(n-minindex)-1;//ami just 1st r last ta sorabo condition etai so index lgtioi and  -1 er kahini hocche jdi  max>min er theke boro hoi tar mane hocche max min er pore ache so ek time e max min ke topkape 1st e jawar jnne oi topkanotai baad dicchi ekhane
     }
     else
        cout<<maxindex-1+(n-minindex);

    return 0;
}
