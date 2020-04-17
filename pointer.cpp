#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(void)
{
    int a=25;
    int *i;
    float b=20.04;
    float *f;
    char c='s';
    char *ch;
    double d = 30.023008;
    double *doi;
    cout<<a<<endl;
    i = &a;//ampersand operator
    cout<<i<<endl;
    cout<<&a<<endl;
    cout<<"pointer value:"<<*i<<endl;
    //int end

    cout<<b<<endl;
    f=&b;
    cout<<f<<endl;
    cout<<&b<<endl;
    cout<<"pointer value:"<<*f<<endl;
    //float end
    cout<<c<<endl;
    ch = &c;
    cout<<ch<<endl;
    cout<<&c<<endl;
    cout<<"pointer value:"<<*ch<<endl;
    //char end

    cout<<d<<endl;
    doi =&d;
    cout<<doi<<endl;
    cout<<&d<<endl;
    cout<<"pointer value:"<<*doi<<endl;

    int *ptr =&a;//*ptr =NULL   Null pointer
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    if(ptr)//executes if ptr is not null
        cout<<"not null";
    else //executes if ptr is null
        cout<<"null";

     //arithmatic operation with pointer
     int n,g=0;
     cin>>n;
     double arr[n];
     double *p,*q,*r;
     srand(int(time(0)));
     for(int i=0;i<n;i++)
     {
         arr[i]=(rand()%10)+1;
     }
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<endl;
     }
     p=arr;
     cout<<p<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<"address of array["<<i<<"] : ";
         cout<<p<<endl;

         cout<<"value of array["<<i<<"] : ";
         cout<<*p<<endl;

         p++;//pointer arithmatic operation

     }
     cout<<p<<endl;
     q =&arr[n-1];
     cout<<q<<endl;
     for(int i=n-1;i>=0;i--)
     {
         cout<<"address of array["<<i<<"] : ";
         cout<<q<<endl;

         cout<<"value of array["<<i<<"] : ";
         cout<<*q<<endl;

         q--;//pointer arithmatic operation

     }
     r=arr;
     while(r<=&arr[n-1])
     {
         cout<<"address of array["<<g<<"] : ";
         cout<<r<<endl;

         cout<<"value of array["<<g<<"] : ";
         cout<<*r<<endl;

         r++;//pointer arithmatic operation
         g++;

     }
     for(int i=0;i<n;i++)
     {
         *arr=i;
         cout<<arr<<endl;
         cout<<*arr<<endl;



     }

     cout<<(arr+3)<<endl;//address of array +3x number of bytes in  data
      cout<<*(arr+3)<<endl;//value of that pointer

      string *names[n];//no memory allocation is here and undefined values would cause the program to crash
      for(int i=0;i<n;i++)
      {
          names[i] =new string[512];//allocate memory
      }
      for(int i=0;i<n;i++)
      {
          cin>>*names[i];
      }
      for(int i =0;i<n;i++)
      {
          cout<<names[i]<<endl;
          cout<<names<<endl;
          cout<<(names+i)<<endl;
          cout<<*names[i]<<endl;//*(names+i)
      }
    int var =100;
    int *u,**pptr;//pointer to pointer
    u = &var;//address of var
    cout<<u<<endl;
    pptr = &u;//address of u
    cout<<pptr<<endl;
    cout<<*u<<endl;
    cout<<**pptr<<endl;
    int yo=9;
    int *j=&yo;
    cout<<*j;
    return 0;
}
