#include<iostream>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
        int prefixSum = 0;
        unordered_map<int, int> mp;
        int count = 0;
        mp[count] = 1;
        for (auto i : nums) {
            prefixSum += i;
            if (mp.find(prefixSum - k) != mp.end())
                count += mp[prefixSum - k];

            if (mp.find(prefixSum) == mp.end())
                mp[prefixSum] = 0;

            mp[prefixSum]++;
        }

        return count;
    }

int main()
{
    vector<int> nums1= {1,1,1}, nums2 = {1,2,3};
    cout<<subarraySum(nums1, 2)<<endl;
    cout<<subarraySum(nums2, 3)<<endl;
    return 0;
}