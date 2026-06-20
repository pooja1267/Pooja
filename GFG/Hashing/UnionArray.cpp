/*
Given two arrays a[] and b[], Return union of both the arrays in any order.
Note: Union of two arrays is an array having all distinct elements that are present in either array.

Examples:

Input : a[] = [1, 2, 3, 2, 1], b[] = [3, 2, 2, 3, 3, 2]
Output : [3, 2, 1]
Explanation: 3, 2 and 1 are the distinct elements present in either array.

Input : a[] = [1, 2, 3], b[] = [4, 5, 6]
Output : [1, 2, 3, 4, 5, 6]
Explanation: 1, 2, 3, 4, 5 and 6 are the elements present in either array.


*/

#include<iostream>
#include<unordered_set>
using namespace std;
unordered_set<int> findUnion(vector<int> &a, vector<int> &b)
{
    unordered_set<int> res;
    for(auto i : a)
        res.insert(i);
    
    for(auto i : b)
        res.insert(i);

    return res;
}

int main()
{
    vector<int> a = {1,2,3}, b= {4,5,6};
    unordered_set<int> ans = findUnion(a,b);
    for(auto i : ans)
        cout<<i<<"\t";

    cout<<endl;
    return 0;
}
