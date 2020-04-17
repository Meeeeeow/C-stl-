#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int *pointer_return()
{

    static  int r[10];
    srand(int(time(0)));
    for(int i=0;i<10;i++)
    {
        r[i]=(rand()%10)+1;
    }
    return r;

}
int main(void)
{

    int *p;
    p=pointer_return();
    for(int i=0;i<10;i++)
    {
        cout<<p+i<<endl;
        cout<<*(p+i)<<endl;
    }
    return 0;
}
