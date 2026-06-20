/*
Given two arrays, a[] and b[] of equal length. The task is to determine if the given arrays are equal or not. Two arrays are considered equal if:

Both arrays contain the same set of elements.
The arrangements (or permutations) of elements may be different.
If there are repeated elements, the counts of each element must be the same in both arrays.
Examples: 

Input: a[] = [1, 2, 5, 4, 0], b[] = [2, 4, 5, 0, 1]
Output: true

Input: a[] = [1, 2, 5, 4, 0, 2, 1], b[] = [2, 4, 5, 0, 1, 1, 2] 
Output: true

 Input: a[] = [1, 7, 1], b[] = [7, 7, 1]
Output: false
*/

#include<iostream>
using namespace std;
bool isEqual(vector<int> &a, vector<int> &b)
{
    unordered_map<int,int> hashSet;
    for(auto i:a)
    {
        if(hashSet.find(i) == hashSet.end())
            hashSet[i] = 1;
        else 
            hashSet[i]++;
    }

    for(auto i : b)
    {
        if(hashSet.find(i) == hashSet.end())
            return false;
        else 
            hashSet[i]--;
    }

    for(auto i : hashSet)
    {
        if(i.second)
            return false;
    }

    return true;
}

int main()
{
    vector<int> n1 = {1,7,1};
    vector<int> n2 = {7,7,1};
    cout<<boolalpha<<isEqual(n1,n2);
    return 0;
}