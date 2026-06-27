#include<iostream>
using namespace std;
 int sumOfSquares(vector<int>& nums) {
        int length = nums.size();
        int sum = 0;
        for(int i = 0; i<length; i++)
        {
            if(length%(i+1) == 0)
            {
                sum += nums[i]*nums[i];
            }
        }
        return sum;        
    }

int main()
{
    vector<int> nums1 = {1,2,3,4}, nums2 = {2,7,1,19,18,3};
    cout<<sumOfSquares(nums1)<<endl;
    cout<<sumOfSquares(nums2)<<endl;
    return 0;
}