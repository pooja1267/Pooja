#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;


int main() {

    int numPirates;
    cin>>numPirates;
    
    vector<int> coins;
    for(int i = 0; i<numPirates; i++)
    {
        int n;
        cin>>n;
        coins.push_back(n);
    }

    int extraCoins;
    cin>>extraCoins;

    int max=INT_MIN;
    for(auto i:coins)
    {
        if(i>max)
            max=i;
    }

    int min = max - extraCoins;
    vector<bool> result;
    for(auto i: coins)
    {
        if(i>=min)
            result.push_back(true);
        else
            result.push_back(false);
    }

    bool first=true;
    cout<<"[";
    for(auto i:result)
    {
        if(!first)
            cout<<", "<<boolalpha<<i;
        else
        {
            cout<<boolalpha<<i;
            first=false;
        }
    }
    cout<<"]";
    return 0;
}