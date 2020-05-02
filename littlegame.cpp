#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    char s[1001];
    cin>>s;
    int flag=0,counter=0;
    int len =strlen(s);
    int c =len;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(s[i]==s[j])
            {
                flag++;

            }
            else
            {
                counter++;
            }
        }
    }

    if(flag!=c && counter ==c || flag/c==c )
    {
        if(counter%2==c)
            cout<<"Second"<<endl;
        else if(flag/c==c)
            cout<<"First"<<endl;
        else
            cout<<"First"<<endl;


    }
    else
    {
        if(abs(flag-counter)%2== 0)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }
    return 0;
}
