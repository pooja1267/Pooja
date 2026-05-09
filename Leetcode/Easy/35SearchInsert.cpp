#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int> &nums, int target)
        {
            if(nums.empty())
                return 0;

            if(target < nums[0])
                return 0;

            if(target > nums[nums.size()-1])
                return nums.size();

            int start=0;
            int end=nums.size()-1;
            bool found=false;
            int mid;
            do
            {
                mid = (start+end)/2;

                if(nums[mid] == target)
                {
                    found = true;
                    break;
                }
                else if(nums[mid]>target)
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }
            while(start<=end);

            if(nums[mid]<target)
                return mid+1;

            else return mid;
        }  

int main()
{
    vector<int> v= {1,3,5,6};
    int k = searchInsert(v,2);
    
    cout<<k<<endl;
    return 0;
}