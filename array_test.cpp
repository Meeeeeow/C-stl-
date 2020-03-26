#include<bits/stdc++.h>
using namespace std;

int add_array(int arr[],int size);
int sum =0;
int main(void)
{
    int n,arr[100];
    int i =0;

    srand((int)time(0));
    cin>>n;

    for(int i=0;i<n;i++)
    {
        arr[i] =(rand()%6)+1;
        cout<<arr[i]<<endl;
    }
    cout<<"Sum is:"<<add_array(arr,n)<<endl;

  {
  int a[][3] = {{1,2},{3,4},{5,6}}; // Works
 // cout<< sizeof(a); // prints 4*sizeof(int)
  int rows =sizeof(a)/sizeof (a[1]);//size of row
  int cols = sizeof (a[1])/sizeof(a[1][2]);//size of column
  cout<<rows<<"X"<<cols<<endl;//dimension of multidimensional array
  //getchar();
  return 0;
}
}
class calculator{
private:
    int num1, num2;
public:

    void setName(int a,int b)
    {
        num1 = a;
        num2 = b;
    }
    int getName(){
        return num1+num2;
    }
    };

int add_array(int arr[],int size)
{
    int x,y;
    cout<<"Enter 2 numbers:";
    cin>>x>>y;
    for(int i =0;i<size;i++)
    {
        sum+=arr[i];
    }
    calculator c;
    c.setName(x,y);

    return sum+c.getName();
}




