/* Given two arrays a[] and b[] of size m and n respectively, 
the task is to determine whether b[] is a subset of a[]. 
Both arrays are not sorted, and elements are distinct

Input: a[] = [11, 1, 13, 21, 3, 7], b[] = [11, 3, 7, 1] 
Output: true

Input: a[]= [1, 2, 3, 4, 5, 6], b = [1, 2, 4] 
Output: true

Input: a[] = [10, 5, 2, 23, 19], b = [19, 5, 3] 
Output: false
*/
#include<iostream>
#include<unordered_set>
using namespace std;
bool isSubSet(vector<int> &a, vector<int> &b)
{
    unordered_set<int> hashSet(a.begin(), a.end());
    for(auto i:b)
    {
        if(hashSet.find(i) == hashSet.end())
            return false;
    }

    return true;
}

int main()
{
    vector<int> n1 = {11,1,13,21,3,7};
    vector<int> n2 = {11,3,7,1};
    cout<<boolalpha<<isSubSet(n1,n2);
    return 0;
}