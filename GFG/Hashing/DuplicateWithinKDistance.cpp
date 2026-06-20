/*
Given an integer array arr[] and an integer k, determine whether there exist two indices i and j such that arr[i] == arr[j] and |i - j| ≤ k. If such a pair exists, return 'Yes', otherwise return 'No'.

Examples: 

Input: k = 3, arr[] = [1, 2, 3, 4, 1, 2, 3, 4]
Output: No
Explanation: Each element in the given array arr[] appears twice and the distance between every element and its duplicate is 4.

Input: k = 3, arr[] = [1, 2, 3, 1, 4, 5]
Output: Yes
Explanation: 1 is present at index 0 and 3.

Input: k = 3, arr[] = [1, 2, 3, 4, 5]
Output: No
Explanation: There is no duplicate element in arr[].
*/

#include<iostream>
#include<unordered_set>
using namespace std;
bool duplicateWithinKDistance(vector<int> &nums, int k)
{
    unordered_set<int> hashSet;
    k = min(k, (int)nums.size());
    
    for(int i = 0; i<=k; i++)
    {
        if(hashSet.find(nums[i]) != hashSet.end())
            return true;
        else
            hashSet.insert(nums[i]);
    }

    for(int i = k+1; i < nums.size(); i++)
    {
        hashSet.erase(nums[i-k-1]);
        if(hashSet.find(nums[i]) != hashSet.end())
            return true;
        else
            hashSet.insert(nums[i]);
    }

    return false;
}
int main()
{   
    vector<int> n = {1,2,3,4,5};
    int k = 3;
    bool duplicate = duplicateWithinKDistance(n,k);
    cout<< (duplicate ? "Yes" : "No") <<endl;
    return 0;
}