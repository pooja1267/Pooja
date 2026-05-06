#include<iostream>
using namespace std;
int main()
{
    int num,rev=0;
    cout<<"Enter a number=";
    cin>>num;
    while(num)
    {
        int rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    cout<<"Reverse="<<rev;
    return 0;
}