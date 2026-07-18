#include "../LinkedList.h"
class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        kCutOff = k;
        for (auto i : nums) {
            add(i);
        }
    }

    int add(int val) {

        kHighest.push(val);
        if (kHighest.size() > kCutOff) {
            kHighest.pop();
        }
        return kHighest.top();
    }

private:
    priority_queue<int, vector<int>, greater<int>> kHighest;
    int kCutOff;
};