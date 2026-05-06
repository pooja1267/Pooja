#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i=1;i<=10;i++)
        sum+=i;
    int sum2 = 0;
    sum2 = 10*11/2;

    cout<<"Sum of first 10 natural numbers="<<sum<<endl;
    cout<<"Sum using Arithmetic Progression ="<<sum2<<endl;
    return 0;
}