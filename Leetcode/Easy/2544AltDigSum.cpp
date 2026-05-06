#include<iostream>
using namespace std;
int reverse(int num)
{
    int rev=0;
    while(num)
    {
        rev=rev*10+(num)%10;
        num/=10;
    }
    return rev;
}
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    int rev=reverse(num);
    int sign=1;
    int sum=0;
    while(rev)
    {
        sum += sign*(rev%10);
        rev/=10;
        sign*=-1;
    }
    cout<<"Alt Digit Sum="<<sum;
    return 0;
}