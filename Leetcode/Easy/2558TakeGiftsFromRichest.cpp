#include "../LinkedList.h"
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> maxPile;
       for(auto i : gifts)
            maxPile.push(i);

        int c=0;
        while(!maxPile.empty() && c<k)
        {
            int top = maxPile.top();
            maxPile.pop();
            maxPile.push(sqrt(top));
            c++;
        }

        long long sum = 0;
        while(!maxPile.empty())
        {
            sum += maxPile.top();
            maxPile.pop();
        }
        return sum;

        
    }
};