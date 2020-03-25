#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int i=0;
     //srand(50) will give different sequence with different seeds or numbers
     srand((int)time(0));//truly random value pabar jnne
    for(i=0;i<10;i++)
    {
        cout<<(rand()%10)+1<<endl;//will create random value with  certain numbers
    }
    cout<<RAND_MAX<<endl;//will give rand() max
    return 0;
}
//rand()function test
