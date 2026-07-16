#include<iostream>
using namespace std;

class RandomizedSet {
public:
    RandomizedSet() {
        mapping.clear();
        vec.clear();
    }

    bool insert(int val) {
        if (mapping.find(val) != mapping.end())
            return false;

        int index = vec.size();
        vec.push_back(val);
        mapping[val] = index;
        return true;
    }

    bool remove(int val) {
        if (mapping.find(val) == mapping.end())
            return false;

        int ind = mapping[val];
        swap(vec[ind], vec[vec.size() - 1]);
        // vec.erase(vec.end()-1);
        vec.pop_back();
        mapping[vec[ind]] = ind;
        mapping.erase(val);
        return true;
    }

    int getRandom() {
        int ind = rand() % vec.size();
        return vec[ind];
    }

private:
    unordered_map<int, int> mapping;
    vector<int> vec;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */