/*
Intersection of two Arrays
Last Updated : 27 Jul, 2025
Given two arrays a[] and b[], find their intersection — the unique elements that appear in both. Ignore duplicates, and the result can be in any order.

Input: a[] = [1, 2, 1, 3, 1], b[] = [3, 1, 3, 4, 1]
Output: [1, 3]
Explanation: 1 and 3 are the only common elements and we need to print only one occurrence of common elements

Input: a[] = [1, 1, 1], b[] = [1, 1, 1, 1, 1]
Output: [1]
Explanation: 1 is the only common element present in both the arrays.

Input: a[] = [1, 2, 3], b[] = [4, 5, 6]
Output: []
Explanation: No common element in both the arrays.
*/

#include<iostream>
#include<unordered_set>
using namespace std;
unordered_set<int> findIntersection(vector<int> &a, vector<int> &b)
{
    unordered_set<int> res;
    unordered_set<int> ele;
    for(auto i : a)
        ele.insert(i);

    for(auto i : b)
    {
        if(ele.find(i) != ele.end())
            res.insert(i);
    }

    return res;
}

int main()
{
    vector<int> a = {1,2,3}, b= {4,5,6};
    unordered_set<int>res;
    res = findIntersection(a,b);
    for(auto i : res)
        cout<<i<<"\t";
    return 0;
}