#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    vector<int> paths;
    for(int i = 0; i<n; i++)
    {
        int p;
        cin>>p;
        paths.push_back(p);
    }

    int magicWands;
    cin>>magicWands;
    
    
    
    int maxGoldCoins = 0;
    int start = 0;
    int end = 0;
    int wandRem = magicWands;
    int firstZeroInWindow = -1;
    while(end < paths.size())
    {
        if(paths[end] == 1)
            end++;
        else // 0
        { 
            if(firstZeroInWindow == -1)
                firstZeroInWindow = end;
            if( wandRem)
            {
                end++;
                wandRem--;
            }
            else //wandRem = 0 && path[end] == 0
            {
                int currLength = end - start;
                maxGoldCoins = max(currLength, maxGoldCoins);
                wandRem = magicWands;
                if(firstZeroInWindow == start)
                    start++;
                else 
                    start = firstZeroInWindow;

                end = start;
                firstZeroInWindow = -1;

            }
        }
         
        

    }

    //Account for last ending sequence
        int currLength = paths.size()-1 - start + 1 + wandRem;
        maxGoldCoins = max(currLength, maxGoldCoins);

    cout<<maxGoldCoins;

    return 0;
}