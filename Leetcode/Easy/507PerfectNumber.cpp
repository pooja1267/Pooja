#include<iostream>
using namespace std;
bool checkPerfectNumber(int num) {
        vector<int> factors;
        for(int i=1; i<sqrt(num); i++)
        {
            if(num%i==0)
            {
                factors.push_back(i);
                if(i!=1 && (i != num/i))
                    factors.push_back(num/i);
            }
        }
        int sum=0;
        for(auto ele : factors)
            sum+= ele;

        if(sum == num)
            return true;
        else
            return false;
    }

int main()
{
    cout<<boolalpha<<checkPerfectNumber(28)<<endl;
    cout<<boolalpha<<checkPerfectNumber(7)<<endl;
    cout<<boolalpha<<checkPerfectNumber(2)<<endl;
    return 0;
}