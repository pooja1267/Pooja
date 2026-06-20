/*
Given two arrays a[] and b[], check if they are disjoint, 
i.e., there is no element common between both the arrays.

Examples:

Input: a[] = [12, 34, 11, 9, 3], b[] = [2, 1, 3, 5] 
Output: False
Explanation: 3 is common in both the arrays.

Input: a[] = [12, 34, 11, 9, 3], b[] = [7, 2, 1, 5] 
Output: True 
Explanation: There is no common element in both the arrays.

*/
#include<iostream>
using namespace std;
#include<unordered_set>
bool isDisjoint(vector<int> &a, vector<int> &b)
{
    unordered_set<int> hashSet(a.begin(), a.end());
    for(auto i : b)
    {
        if(hashSet.find(i) != hashSet.end())
            return false;
    }

    return true;
}

int main()
{
    vector<int> n1 = {12,34,11,9,3};
    vector<int> n2 = {7,2,1,5};
    cout<<boolalpha<<isDisjoint(n1,n2);
    return 0;
}