#include "../LinkedList.h"
class Solution {
public:
    void paranthesisHelper(int open, int close, int max, vector<string> &res, string curr)
    {
        if(open == max && close == max)
        {
            res.push_back(curr);
            return;
        }

        if(open < max)
        {
            curr += "(";
            paranthesisHelper(open+1, close, max, res, curr);
            curr.pop_back();
        }

        if(close < open)
        {
            curr+= ")";
            paranthesisHelper(open, close+1, max, res, curr);
            curr.pop_back();            
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string current="";
        paranthesisHelper(0,0,n,res,current);
        return res;
    }
};