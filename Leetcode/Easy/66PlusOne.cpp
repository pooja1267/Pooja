#include<iostream>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
       if(digits.empty())
            return vector<int>{1};

        int n = digits.size()-1;
        int carry=0;
        int add = 1;
        do
        {
            digits[n] = digits[n]+add+carry;
            if(digits[n]>9)
            {
                digits[n] %=10;
                carry =1;
            }
            else
                carry=0;

            if(carry==0)
                break;
                
            add = 0;
            n--;
        } while(n>=0);

        if(carry)
            digits.insert(digits.begin(),1);

        return digits;
    }


int main()
{
    vector<int> nums = {1,2,3};
    nums = plusOne(nums);
    for(auto i : nums)
        cout<< i <<"\t";

    return 0;
}