#include "../LinkedList.h"

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        //1st solution using priority queue
        priority_queue<pair<int,int>> rank;
        for(int i = 0; i< score.size(); i++)
            rank.push({score[i],i});

        vector<string> res(score.size());
        int c = 0;
        while(!rank.empty())
        {
            auto val = rank.top();
            switch(c)
            {
                case 0: res[val.second] = "Gold Medal";
                        break;
                case 1: res[val.second] = "Silver Medal";
                        break;
                case 2: res[val.second] = "Bronze Medal";
                        break;
                default:
                        res[val.second] = to_string(c+1);
            }
            c++;
            rank.pop();
        }

        //2nd iterating through the array
        //int first=-1, second = -1, third = -1;
        return res;       
    }
};