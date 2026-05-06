#include<iostream>
using namespace std;
int countDigits(int n)
{
    int num=n;
    int digits[10]={0};
    while(num)
    {
        int rem=num%10;
        digits[rem]++;
        num=num/10;
    }
    int count=0;
    for(int i=1;i<10;i++)
    {
        
        if(digits[i] && (n%i==0))
            count+=digits[i];
    }
    return count;
}
int main()
{
    cout<<countDigits(7)<<endl;
    cout<<countDigits(121)<<endl;
    cout<<countDigits(1248)<<endl;
    cout<<countDigits(105)<<endl;
    return 0;   
}