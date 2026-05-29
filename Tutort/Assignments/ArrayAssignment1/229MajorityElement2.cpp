#include<iostream>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
        int c1 = INT_MIN, v1=0;
        int c2 = INT_MIN, v2=0;
        for(auto i : nums)
        {
            if(c1 == i)
                v1++;
            else if(c2 == i)
                v2++;
            else if(!v1)
            {
                c1=i;
                v1=1;
            }
            else if(!v2)
            {
                v2=1;
                c2=i;
            }
            else
            {
                v1--;
                v2--;
            }
        }

        int check1=0,check2=0;
        for(auto i : nums)
        {
            if(i == c1)
                check1++;
            else if(i == c2)
                check2++;
        }

        int threshold = nums.size()/3;
        vector<int> res;
        if(check1 > threshold)
            res.push_back(c1);

        if(check2 > threshold)
            res.push_back(c2);

        return res;
    }    

int main()
{
    vector<int> nums = {2,1,1,3,4,1,5,6};
    vector<int> res = majorityElement(nums);
    for(auto i : res)
        cout<<i<<"\t";

    return 0;
}