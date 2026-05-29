#include<iostream>
using namespace std;
int majorityElement(vector<int>& nums) {
    int c = -1, v = 0;
    for(auto i : nums)
    {
        if(v==0)
        {
            c = i;
            v = 1;
        }
        else if(i == c)
            v++;
        else   
            v--;
    }

    return c;
}

int main()
{
    vector<int> nums = {2,2,2,1,1,1,2};
    cout<<majorityElement(nums)<<endl;
    return 0;
}