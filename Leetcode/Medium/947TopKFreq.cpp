#include "../LinkedList.h"
class Solution {
public:
    typedef pair<int,int> PairType;
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freq;
        for(int i =0; i<nums.size();i++)
        {
            if(freq.find(nums[i]) == freq.end())
                freq[nums[i]] = 1;
            else
                freq[nums[i]]++;
        }
        auto comp = [](const PairType &a, const PairType &b) { 
        return a.second > b.second;
        };
        priority_queue<PairType, vector<PairType>, decltype(comp)> pq;
        for(auto itr : freq)
        {
            pq.push(itr);
            if(pq.size() > k)
                pq.pop();
        }

        vector<int> res;
        while(!pq.empty())
        {
            pair<int,int> temp = pq.top();
            res.push_back(temp.first);
            pq.pop();
        }


        return res;
        
    }
};