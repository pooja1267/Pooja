#include<iostream>
using namespace std;
vector<int> plusOne(vector<int>& digits) 
{
    int carry = 0;
    int add=1;
    int n = digits.size()-1;
    while(n>=0)
    {
        digits[n] = digits[n]+carry+add;
        add = 0;
        if(digits[n]>9)
        {
            digits[n] = digits[n]%10;
            carry=1;
        }
        else 
            carry=0;

        if(!carry)
            break;

        n--;
    }

    if(carry)
        digits.insert(digits.begin(),1);

    return digits;
}

int main()
{
    vector<int> digits= {4,3,2,1};
    digits = plusOne(digits);
    for(auto i : digits)
        cout << i;
    return 0;
}