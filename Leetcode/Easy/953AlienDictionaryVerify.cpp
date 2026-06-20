#include<iostream>
using namespace std;
bool alienStringCompare(const string& s1, const string& s2, unordered_map<char,int> cmp) {
        int i = 0;
        while (i < s1.length() && i < s2.length()) {
            /*
           cout << "Comapring i=" << i << " s1 = (" << s1[i] << ","
                 << alienOrder[s1[i]] << ") and s2=(" << s2[i] << ","
                 << alienOrder[s2[i]] << ")" << endl; 
                 */
            if (s1[i] != s2[i]) {
                return (cmp[s1[i]] < cmp[s2[i]]);
            }
            i++;
        }

        if (i == s2.length() && i < s1.length())
            return false;

        return true;
    }

    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> alienOrder;
        for (int i = 0; i < order.size(); i++)
            alienOrder[order[i]] = i;
/*
        for (auto itr : alienOrder)
            cout << itr.first << "\t" << itr.second << endl;
*/
        for (int i = 0; i < words.size() - 1; i++) {
            if (!alienStringCompare(words[i], words[i + 1], alienOrder))
                return false;
        }

        return true;
    }

