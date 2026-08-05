#include "../LinkedList.h"
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() == 1)
            return intervals;

        auto comp = [] (vector<int> &a, vector<int> &b) { return a[0] < b[0]; };
        sort(intervals.begin(), intervals.end(), comp);
        #if 0
        for(auto i : intervals)
            cout<< i[0] << "\t" <<i[1]<<endl;
        #endif

        int first = 0, second = 1; 
        while(second < intervals.size())
        {
            if(intervals[second][0] >= intervals[first][0] && intervals[first][1] >= intervals[second][0])
            {
                intervals[first][1] = max(intervals[first][1], intervals[second][1]);
                intervals[second][0] = -1;
                intervals[second][1] = -1;
            }
            else
            {
                first=second;
            }
            second++;
        }

        vector<vector<int>> res;
        for(int i = 0; i< intervals.size(); i++)
        {
            if(intervals[i][0] != -1)
                res.push_back({intervals[i][0], intervals[i][1]});
        }

        return res;
        

    }
};