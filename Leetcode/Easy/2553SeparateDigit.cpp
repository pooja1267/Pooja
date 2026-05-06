#include<iostream>
#include<vector>
using namespace std;

vector<int> separateDigits(vector<int>& nums) {
        vector<int> digits;
        vector<int> ans;
        for(auto i:nums)
        {
            while(i)
            {
                digits.push_back(i%10);
                i/=10;
            }
            reverse(digits.begin(), digits.end());
            ans.insert(ans.end(), digits.begin(), digits.end());
            digits.clear();
        }
        return ans;
    }

int main()
{
    vector<int> num={13,25,83,77};
    vector<int> num2={7,1,3,9};
    for(auto i:separateDigits(num))
    {
        cout<<i<<" ";
    }
    cout<<endl;

    for(auto i:separateDigits(num2))
    {
        cout<<i<<" ";
    }
    cout<<endl;

}