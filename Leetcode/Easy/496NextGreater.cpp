#include<iostream>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp(10, -1);
        vector<int> ans;
        for(int i = 0; i< nums2.size(); i++)
        {
            temp[nums2[i]] = i;            
        }

        for(int i=0; i<nums1.size(); i++)
        {
            int res = -1;
            for(int j=temp[nums1[i]]+1; j<nums2.size(); j++)
            {
                if(nums2[j]>nums1[i])
                {
                    res=nums2[j];
                    break;
                }
            }
            ans.push_back(res);
        }
        return ans;
    }

    int main()
    {
        vector<int> n1 = {4,1,2};
        vector<int> n2 = {1,3,4,2};
        vector<int> rs = nextGreaterElement(n1,n2);
        for(auto i: rs)
         cout<<i<<"\t";
        return 0;
    }