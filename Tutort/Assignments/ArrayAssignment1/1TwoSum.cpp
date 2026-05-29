#include<iostream>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size()-1;
    bool found = false;
    int i;
    vector<int>::iterator iter;
    for(i = 0; i< nums.size()-1; i++)
    {
        int second = target - nums[i];
        iter = find(nums.begin()+i+1, nums.end(), second);
        if(iter != nums.end())
        {
            found = true;
            break;            
        }        
    }

    //if(found)
    {
        vector<int> res = {i, (int)distance(nums.begin(),iter) };
        return res;
    }
}

int main()
{
    vector<int> n = {3,3};
    vector<int> res = twoSum(n,6);
    cout<<res[0]<<"\t"<<res[1]<<endl;
    return 0;
}