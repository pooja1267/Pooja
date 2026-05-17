
#include<iostream>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0;
        int j = 0;
        while(i < nums1.size() && j<nums2.size())
        {
            if(nums1[i] == nums2[j])
            {
                result.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j])
            {
                i++;
            }
            else 
                j++;
        }
        
        return result;
    }

int main()
{
    vector<int> v1 = {1,2,2,1};
    vector<int> v2 = {2,2};
    vector<int> v3 = {4,9,5};
    vector<int> v4 = {9,4,9,8,4};
    vector<int> res = intersect(v1, v2);
    vector<int> res2 = intersect(v3, v4);
    for(auto i : res)
        cout<<i<<"\t";

    cout<<endl;
    for(auto i : res2)
        cout<<i<<"\t";
    cout<<endl;

    return 0;
}