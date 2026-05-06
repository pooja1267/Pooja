#include<iostream>
using namespace std;
int sumOfDigits(int num)
{
    int sum=0;
    while(num)
    {
        int rem=num%10;
        num=num/10;
        sum+=rem;
    }
    return sum;
}
int main()
{
    int num;
    cin>>num;
    while(num>=10)
    {
        num=sumOfDigits(num);
    }
    cout<<num;
    return 0;
}