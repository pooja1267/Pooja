#include<iostream>
using namespace std;
int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int start = 0;
        int end = people.size()-1;
        int count = 0;
        while(start<end)
        {
            int sum = people[start] + people[end];
            if(sum>limit)
            {
                end--;
                count++;
            }
            else if(limit>=sum)
            {
                count++;
                end--;
                start++;
            }
        }

        if(start==end)
            count++;

        return count;

        }

int main()
{
    vector<int> p = {3,2,2,1};
    int l = 3;
    cout<<numRescueBoats(p,l);
    return 0;
}