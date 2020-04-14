#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(void)
{
    int n,sum=0;
    cin>>n;


        vector<int>v[n];

    for(int i=0;i<n;i++)
    {
       for(int j=0;j<3;j++)
       {
            int a;

            cin>>a;

                v[i].push_back(a);

       }
    }
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<n;i++)
        {
            sum+=v[i][j];
        }

    }
    if(sum ==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;


}
/*#include <iostream>

using namespace std;

int main()
{
    int n, x, y, z, xsum=0, ysum=0, zsum=0;
    cin >> n;

    while (n--)
    {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0 && ysum == 0 && zsum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
*/
