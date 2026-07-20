#include "../LinkedList.h"
#include <numeric>
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        unordered_map<int,int> rowSoldierMap;
        for(int i =0; i<mat.size();i++)
        {
            int sum = accumulate(mat[i].begin(), mat[i].end(), 0);
            rowSoldierMap[i] = sum;
        }
#if 0
         for(auto i : rowSoldierMap)
            cout<< i.first<<"\t"<<i.second<<"\n";
#endif
        auto comp = [](pair<int,int> &a, pair<int,int> &b) { if(a.second != b.second)
                                                                    return a.second < b.second;
                                                            else
                                                                    return a.first < b.first; };
        priority_queue<pair<int,int>, 
                        vector<pair<int,int>>, 
                        decltype(comp)> soldierStrengthMax;
        

        for(auto i : rowSoldierMap)
        {

            soldierStrengthMax.push(i);
            if(soldierStrengthMax.size() > k)
                soldierStrengthMax.pop();
        }

        vector<int> res;
        while(!soldierStrengthMax.empty())
        {
            pair<int, int> temp = soldierStrengthMax.top();
            res.push_back(temp.first);
            soldierStrengthMax.pop();
        }

        reverse(res.begin(), res.end());
        return res;
        
    }
};