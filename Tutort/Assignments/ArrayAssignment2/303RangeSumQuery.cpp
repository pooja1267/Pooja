#include<iostream>
using namespace std;
class NumArray
{
    public: 
        NumArray(vector<int> & nums)
        {
            prefixSum.resize(nums.size());
            prefixSum[0]=nums[0];
            for(int i = 1; i<nums.size();i++)
                prefixSum[i] = prefixSum[i-1] + nums[i];

        }

        int sumRange(int left, int right) {
            return left==0 ? prefixSum[right] : (prefixSum[right]-prefixSum[left]);
        }

    private:
        vector<int> prefixSum;
};

int main()
{
    vector<int> n = {-2,0,3,-5,2,-1};
    NumArray n1 = NumArray(n);
    cout<<n1.sumRange(0,2)<<endl;
    cout<<n1.sumRange(2,5)<<endl;
    cout<<n1.sumRange(0,5)<<endl;
    return 0;
}