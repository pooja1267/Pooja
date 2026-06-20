#include<iostream>
#include<unordered_set>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> temp;
        for(int i=0;i<nums.size();i++)
        {
            if(temp.find(nums[i]) != temp.end())
            {
                    return true;
            }
            temp.insert(nums[i]);

            if(temp.size() > k)
                temp.erase(nums[i-k]);
        }
        return false;
    }
int main()
{
    vector<int> num = {1,0,1,1};
    int k =2;
    cout<<boolalpha<<containsNearbyDuplicate(num,k)<<endl;
    return 0;
}