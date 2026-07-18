#include "../LinkedList.h"
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> unique;
        for(auto i : nums)
            if(i)
                unique.insert(i);

        return unique.size();

    }
};