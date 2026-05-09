#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
        auto it = find(nums.begin(), nums.end(), 0);
        if(it == nums.end())
        {
            return;
        }

        int index=0;
        while(nums[index]!=0)
            index++;
        
        for(int i=index+1; i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i], nums[index]);
                index++;
            }
        }
    }

int main()
{
    vector<int>v={1,2,3,0,0,1,0,8,0,9,0,0};
    moveZeroes(v);
    for(auto i : v)
        cout<<i<<"\t";

    return 0;
}