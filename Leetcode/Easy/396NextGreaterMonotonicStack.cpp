#include<iostream>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
{

    vector<int> nextGreater(nums2.size()+1,-1);
    stack<int> s;
    vector<int>res;
    for(int i = nums2.size()-1; i>=0; i--)
    {
        while(!s.empty() && s.top() <= nums2[i])
            s.pop();

        if(!s.empty())
            nextGreater[nums2[i]] = s.top();
        
        s.push(nums2[i]);
    }

    for(auto i: nums1)
        res.push_back(nextGreater[i]);

    return res;

}

int main()
{
    vector<int> n1 = {4,1,2};
    vector<int> n2 = {1,3,4,2};
    vector<int> res = nextGreaterElement(n1,n2);
    for(auto i : res)
        cout<<i<<"\t";

    return 0;
}