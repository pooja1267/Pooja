#include<iostream>
using namespace std;
int countPrimes(int n) {

        if(n<2)
            return 0;

        bool isPrime[n];
        for(int i=0;i<n;i++)
            isPrime[i]= true;

        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=2;i*i<n;i++)
        {
            if(isPrime[i])
            {
                for(int j=i*i; j<n; j+=i)
                    isPrime[j]=false;
            }
        }

        int count=0;
        for(int i=0;i<n;i++)
            if(isPrime[i])
                count++;

        return count;
        
    }
int main()
{
    int n;
    cout<<"Enter limit 0 - n ";
    cin>>n;
    cout<<"Number of primes="<<countPrimes(n);
    return 0;
}