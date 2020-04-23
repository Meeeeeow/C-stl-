#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,c;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65 && s[i]<=90)
            a++;
        else if(s[i]>=97 && s[i]<=122)
            b++;

    }
    if(a>b)
        {
            for(int i=0;i<s.size();i++)
            {
               putchar(toupper(s[i]));//int toupper(int c) return kore integer and parameter nai hocche integer  to cout die printr korle eta upper caase er  ASCII value debe ejnne PUTCHAR() use kora hoi jate sgheta character e change hoe jai
            }
        }
        else
        {
           for(int i=0;i<s.size();i++)
            {
                putchar(tolower(s[i]));
            }
        }
    return 0;
}
