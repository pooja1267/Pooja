#include<iostream>
using namespace std;
    int sumOfSquareOfDigit(int num)
    {
        int n=num;
        int sum=0;
        while(num)
        {
          int rem=num%10;
          sum+= rem*rem;
          num/=10;  
        }
        cout<<"num="<<n<<", Sum="<<sum<<endl;
        return sum;
    }
    
    bool isHappy(int n) 
    {
        int fast=n,slow=n;
        do
        {
            slow = sumOfSquareOfDigit(slow);
            cout<<"Slow="<<slow<<endl;

            fast = sumOfSquareOfDigit(sumOfSquareOfDigit(fast));
            cout<<"Fast="<<fast<<endl;
            cout<<endl<<endl;
            //cout<<"Slow="<<slow<<", Fast="<<fast<<endl;
        }while ((fast != slow)&& (slow!=1));
        if(slow == 1)
            return true;
        else
            return false;
    }

    int main()
    {
        bool happy = isHappy(19);
        cout<<"19 is "<<happy;
        happy = isHappy(2);
        cout<<" 2 is "<<happy;
        return 0;
    }