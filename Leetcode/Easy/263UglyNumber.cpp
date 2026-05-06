    
#include<iostream>
#include<vector>
using namespace std;

    bool isPrime(int num)
    {
        if(num==0 || num==1)
            return false;

        if(num==2)
            return true;

        for(int i=2; i<=sqrt(num); i++)
        {
            if(num%i==0)
                return false;
        }
        return true;
    }

    bool isUgly(int n) {
        if(n<=0)
            return false;

        vector<int> factors;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i == 0)
            {
                factors.push_back(i);
                if((i != n/i))
                    factors.push_back(n/i);
            }
        }
        
        for(auto i : factors)
        {
            if(isPrime(i) && i!= 3 && i!=5 && i!=2)
                return false;
        }
        return true;
    }
    int main()
    {
        int num;
        cout<<"Enter a number:"<<endl;
        cin>>num;
        if(isUgly(num))
            cout<<"Ugly Number"<<endl;
        else
            cout<<"Not an ugly number"<<endl;
        return 0;
    }