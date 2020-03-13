#include<stdio.h>
#include<iostream>
#include<map>

using namespace std;
int main()
{

    map<int,string>mp;
    map<char,int>::iterator it;
    map<char,int>mp1;
    map<int,string>::iterator it1;
    int n,x;
    cin>>n;
    for(int i =0;i<n;i++)
    {

        cin>>mp[i];
    }
    for(int i =0;i<mp.size();i++)
    {

        cout<<mp[i]<<endl;;
    }
    mp1['a']=65;
    mp1['b'] =66;
    mp1['c'] =67;
    mp1['d'] = 68;

    cout<<mp1['c']<<endl;

     x=n+1;
    mp.insert(pair<int,string>(x,"Raisa"));//map insert er r ekta niyom


    map<char,int>::iterator it3 = mp1.find('c');//search
    mp1.erase(it3);//erase
    cout<<"Key found= "<<it3 -> second<<endl;


    for(it = mp1.begin();it != mp1.end();it++)
    {

        cout<<it->second<<"=>"<<it->first<<endl;
    }

    for(it1 =mp.begin();it1!=mp.end();it1++)
    {

        cout<<it1->first<<"=>"<<it1->second<<endl;
    }
    cout<<mp.size()<<endl;
    cout<<"is empty:"<<mp.empty()<<endl;//empty kina dekhbe
    mp.clear();
    cout<<mp.size()<<endl;
    cout<<"is empty:"<<mp.empty()<<endl;


    return 0;
}
