#include "../LinkedList.h"
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> temp;
        for(auto i : strs)
        {
            string t = i;
            sort(t.begin(), t.end()); 
            //if(temp.find(t) != temp.end())
                temp[t].push_back(i);
            //else
            //    temp[t].push_back(i);
        }

        vector<vector<string>> res;
        for( auto i : temp)
            res.push_back(i.second);

        return res;
        
    }
};

//Instead of sorting -> we can maintain a count array and convert into string and use it as key.... or just understand the concept of user defined comparator here