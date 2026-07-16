#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
class WizardElection
{
    private :
        vector<int> wizard, moment;
        map<int, int> count;
        vector<int> preResult;

    public : 
        WizardElection(vector<int> w, vector<int> m)
        {
            int currentMax = w[0];
            count[w[0]] = 1;
            preResult.push_back(w[0]);
            for(int i = 1; i < w.size(); i++)
            {
                if(count.find(w[i]) == count.end())
                    count[w[i]] = 1;
                else
                    count[w[i]]++;

                if(currentMax != w[i])
                {
                    if(count[currentMax] <= count[w[i]])
                    {
                        currentMax = w[i];                        
                    }
                }
                preResult.push_back(currentMax);
            }
        }

        void traverse()
        {
            for(auto i : preResult)
                cout<<i<<"\t";

            cout<<endl;
        }
        int query(int time)
        {
            int index = time/5;
            if(index > preResult.size()-1)
                return preResult[preResult.size()-1];
                
            return preResult[index];
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n; 
    vector<int> w,m;
    
    for(int i =0 ; i<n;i++)
    {
        int temp;
        cin>>temp;
        w.push_back(temp);
    }

    for(int i =0 ; i<n;i++)
    {
        int temp;
        cin>>temp;
        m.push_back(temp);
    }

    int num;
    cin>>num;

    vector<int>q;
    for(int i = 0; i<num;i++)
    {
        int temp;
        cin>>temp;
        q.push_back(temp);

    }

    WizardElection *wiz = new WizardElection(w,m);
    //wiz->traverse();
    #if 0
    cout<<wiz->query(3)<<endl;
    cout<<wiz->query(12)<<endl;
    cout<<wiz->query(25)<<endl;
    cout<<wiz->query(15)<<endl;
    cout<<wiz->query(24)<<endl;
    cout<<wiz->query(8)<<endl;
    #endif

    for(auto i : q)
    {
        cout<<wiz->query(i)<<" ";
    }
    return 0;
}
