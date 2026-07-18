#include "../LinkedList.h"
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        auto comp = [](const pair<int, int> &a, const pair<int,int> &b) { return a.first > b.first;}; 
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(comp)> pq, pq_index;
        for(int i = 0; i<nums.size(); i++)
        {
            pq.push({nums[i],i});
            if(pq.size() > k)
                pq.pop();
        }

        
            
        vector<int> res;
        while(!pq.empty())
        {
            pair<int,int> temp = pq.top();
            pq_index.push({temp.second, temp.first});
            pq.pop();
        }

        while(!pq_index.empty())
        {
            res.push_back(pq_index.top().second);
            pq_index.pop();
        }

        return res;
        
    }
};