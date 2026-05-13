#include<iostream>
using namespace std;
int thirdMax(vector<int>& nums) {
        long long first_max = LLONG_MIN;
        long long  second_max = LLONG_MIN;
        long long third_max = LLONG_MIN;
       
        for(auto i : nums)
        {
            if(i>first_max)
            {
                third_max = second_max;
                second_max = first_max;
                first_max = i;
            }
            else if(i>second_max && i!=first_max)
            {
                third_max = second_max;
                second_max = i;
            }
            else if(i>third_max & i!=first_max && i!= second_max)
            {
                third_max = i;
            }
        }

        if(third_max == LLONG_MIN)
            return first_max;
        else 
            return third_max;
    }

int main()
{
    vector<int> nums = {1,2,2};
    int tmax = thirdMax(nums);
    cout<<tmax<<endl;
    return 0;
}