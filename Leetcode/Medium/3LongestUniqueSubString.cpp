#include<iostream>
using namespace std;
int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0;
        unordered_map<int, int> index;
        int length = 0, max_length = 0;
        while (end < s.length()) {

            if (index.find(s[end]) == index.end()) {
                index[s[end]] = end;
                max_length = max(max_length, end - start + 1);
                end++;
            } else {
                if (index[s[end]] >= start)
                    start = index[s[end]] + 1;
                else {
                    index[s[end]] = end;
                    max_length = max(max_length, end - start + 1);
                    end++;
                }
            }
        }
        return max_length;
    }
int main()
{
    string s = "abba";
    cout<<lengthOfLongestSubstring(s);
    return 0;
}