#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> artifact;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        artifact.push_back(x);
    }

    int result=0;
    for(int i=0;i<32;i++)
    {
        int sum=0;
        int mask = 1<<i;
        for(auto i:artifact)
        {
            if(i&mask)
                sum++;
        }

        if(sum%3)
            result |= mask;
    }
    cout<<result;
    return 0;
}