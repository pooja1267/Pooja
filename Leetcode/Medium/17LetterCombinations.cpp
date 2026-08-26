#include "../LinkedList.h"
class Solution {
public:
    map<int, string> keypad;

    Solution() {
        keypad[2] = "abc";
        keypad[3] = "def";
        keypad[4] = "ghi";
        keypad[5] = "jkl";
        keypad[6] = "mno";
        keypad[7] = "pqrs";
        keypad[8] = "tuv";
        keypad[9] = "wxyz";       
    }
    void letterComboHelper(string digits, int index, vector<string>& res,
                           string currStr) {
        if (index == digits.length()) {
            res.push_back(currStr);
            return;
        }

        
            string val = keypad[digits[index] - '0'];
            for (int j = 0; j < val.length(); j++) {
                currStr.push_back(val[j]);
                letterComboHelper(digits, index + 1, res, currStr);
                currStr.pop_back();
            }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string curr = "";
        letterComboHelper(digits, 0, res, curr);
        return res;
    }
};