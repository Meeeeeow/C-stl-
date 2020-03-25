#include<bits/stdc++.h>

using namespace  std;
int a = 20,b = 40;
int area(int l=2 ,int h=2);//default argument (only active when user donot give values)
int addition();
int main(void)
{
    double a = 20.5,b = 20.5;
    cout<<area()<<endl;//no parameters
    cout<<area(4)<<endl;//1 parameter
    cout<<area(4,4)<<endl;//both given
    cout<<addition()<<endl;
    cout<<a+b<<endl;//will add local variables
    cout<<::a+::b<<endl;//unary scope operator
    return 0;
}
int area(int l,int h)
{
    return .5*l*h;
}
//default argument

//scope and unary scope operator

int addition(){
     return a+b;
}

