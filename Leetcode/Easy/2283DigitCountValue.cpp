#include<iostream>
using namespace std;
bool digitCount(string num) {
        int count[10]={0};
        for(int i=0;i<num.length(); i++)
            count[num[i]-'0']++;

#if 0
        for(int i: count)
            cout<<i<<endl;
#endif

        for(int i=0; i<num.length(); i++)
            if((num[i]-'0')!=count[i])
                return false;

        return true;
    }

    int main()
    {
        cout<<boolalpha<<digitCount("1210")<<endl;
        cout<<boolalpha<<digitCount("030")<<endl;
        return 0;
    }
