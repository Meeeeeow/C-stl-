#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
	char s[101];

	cin>>s;
	 int l  = strlen(s);
	sort(s,s+l);
     cout<<s;
	 int count =0;
    for(int i=0; i<l; i++)
    {
        if(s[i] != s[i+1])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!\n";
    }
    else
    {
        cout<<"IGNORE HIM!\n";
    }
}
/*#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
	int flag=0,counter=0,distinct=0,len;
	char s[101];


        cin>>s;

	int l=strlen(s);
	 for(int i=0;i<l;i++)
     {
         for(int j=0;j<l;j++)
         {
             if(s[i]==s[j])
             {
                 flag++;
             }


         }
         if(flag==1)
             {
                 distinct++;
             }
             else
             {
                 counter++;
             }
             flag=0;
     }
     len=distinct+(counter/2);
     if(len%2==0)
        cout<<"CHAT WITH HER!";
     else
     {

         cout<<"IGNORE HIM!"<<endl;
     }
}
*/
