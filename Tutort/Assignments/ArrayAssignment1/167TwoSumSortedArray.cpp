#include<iostream>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size()-1;
    vector<int> res(2,0);
    
    while(start<end)
    {
        int sum = nums[start]+nums[end];
        if(sum == target)
        {
            res[0] = start+1;
            res[1] = end+1;
            break;
        }
        else if(sum<target)
            start++;
        else 
            end--;
    }
    return res;
}
int main()
{
    vector<int> n1 = {-1,0};
    vector<int> r = twoSum(n1,-1);
    cout<< r[0]<<"\t"<<r[1]<<endl;
    return 0;
}