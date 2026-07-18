#include "../LinkedList.h"
int lastStoneWeight(vector<int>& stones) {
        if(stones.size() <= 1)
        {
            return stones.size() ? stones[0] : 0;
        }

        priority_queue<int> pq (stones.begin(), stones.end());

        while(pq.size() > 1)
        {
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(abs(y-x))
            {
                pq.push(abs(y-x));
            }
        }

        if(pq.size())
        return pq.top();
        else 
        return 0;

    }