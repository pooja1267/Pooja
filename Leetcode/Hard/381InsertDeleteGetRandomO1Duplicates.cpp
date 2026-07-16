#include<iostream>
#include<set>
using namespace std;
class RandomizedCollection {
public:
    RandomizedCollection() {
        // mapping.clear();
        // vec.clear();
    }

    bool insert(int val) {
        //cout << "Inserting val=" << val << endl;
        bool retVal = (mapping.find(val) == mapping.end());
        int indx = vec.empty() ? 0 : vec.size();
        mapping[val].insert(indx);
        vec.push_back(val);
        //traverse();
        return retVal;
    }

    void traverse() {
        for (auto i : mapping) {
            cout << i.first << "::";
            for (auto j : i.second)
                cout << j << "\t";
            cout << endl;
        }
    }

    bool remove(int val) {
        if (mapping.find(val) == mapping.end()) {
            cout << " Cannot deleted val=" << val;
            return false;
        }

        if (vec.size() == 1) {
            mapping.clear();
            vec.clear();
        } else {
            int ind = *mapping[val].rbegin();
            mapping[val].erase(ind);
            if (mapping[val].empty())
                mapping.erase(val);

            if (vec[ind] != vec[vec.size() - 1]) {
                swap(vec[ind], vec[vec.size() - 1]);

                mapping[vec[ind]].erase(vec.size() - 1);
                mapping[vec[ind]].insert(ind);
            }
            vec.erase(vec.end() - 1);
        }

        //cout << "Deleting val=" << val << endl;
        //traverse();
        return true;
    }

    int getRandom() { return vec[rand() % vec.size()]; }

private:
    unordered_map<int, set<int>> mapping;
    vector<int> vec;
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */