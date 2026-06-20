/*
Given an integer array arr[], find the element that appears most frequently. If multiple elements have the same highest frequency, return the largest among them.

Examples: 

Input : arr[] = [1, 3, 2, 1, 4, 1]
Output : 1
Explanation: 1 appears three times in array which is maximum frequency.

Input : arr[] = [10, 20, 10, 20, 30, 20, 20]
Output : 20 appears four times in array which is maximum frequency

Input: arr[] = [1, 2, 2, 4, 1]
Output: 2
Explanation: 1 and 2 both appear two times, so return 2 as it's value is bigger.


*/
#include<iostream>
#include<unordered_map>
using namespace std;
int maxFrequencyElement(vector<int> &nums)
{
    int res=0, max=0;
    unordered_map<int,int> freq;
    for(auto i : nums)
    {
        if(freq.find(i) != freq.end())
            freq[i]++;
        else
            freq[i]=1;
    }

    for(auto i : freq)
    {
        if(i.second>max)
        {
            max = i.second;
            res = i.first;
        }
    }

    return res;
}

int main()
{
    vector<int> n = {1,2,2,4,1};
    cout<<maxFrequencyElement(n)<<endl;
    return 0;
}