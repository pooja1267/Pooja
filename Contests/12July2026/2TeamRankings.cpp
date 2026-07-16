
#include <cstdio>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int positions;
vector<vector<int>> voteCount;


bool comp(char a, char b, int start)
{
    for(int i = start; i < voteCount.size(); i++)
    {
        if(voteCount[i][a-'A'] != voteCount[i][b-'A'])
            return voteCount[i][a-'A'] > voteCount[i][b-'A'];
    }

    return a>b;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    
    vector<string> rank;
    for(int i = 0; i<n; i++)
    {
        string str;
        cin>>str;
        rank.push_back(str);
    }
    #if 0
    for(auto i : rank)
        cout<<i<<endl;
#endif
    if(n==1)
    {
        cout<<rank[0]<<endl;
        return 0;
    }


    positions = rank[0].size();
     vector<vector<int>> temp (positions, vector<int>(26, 0));
     

    for(int i = 0; i<rank.size();i++)
    {
        for(int j = 0; j<positions; j++)
        {
            temp[j][rank[i][j]-'A']++;
        }
    }
    voteCount = temp;
#if 1
    for(int i = 0; i<positions;i++)
    {
        for(int j = 0; j<26;j++)
            cout<<voteCount[i][j]<<" ";

        cout<<endl;
    }
#endif
    string result = rank[0]; //Need to sort this string
    #if 0
    sort(result.begin(), result.end(), comp);
    cout<<result<<endl;
    #endif
    int num= result.length();
    for(int i = 0; i<num-1;i++)
    {
        for(int j = i+1; j<num;j++)
        {

            if( !comp(result[i], result[j],0)) //voteCount[i][result[i]-'A'] < voteCount[i][result[j]-'A'] )
            {
                swap(result[i], result[j]);
            }
        }
    }
    cout<<result;

    return 0;
}



