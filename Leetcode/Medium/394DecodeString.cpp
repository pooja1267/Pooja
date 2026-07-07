#include<iostream>
using namespace std;
string decodeString(string s) {
        stack<char> st;
        for(int i =0; i<s.length(); i++)
        {
            if(s[i] != ']')
                st.push(s[i]);
            else
            {
                string temp;
                while(st.top() != '[')
                {
                    temp += st.top();
                    st.pop();
                }
                st.pop(); //Removing '['
                reverse(temp.begin(), temp.end());
                //Get the number
                string num;
                while(!st.empty() && isdigit(st.top()))
                {
                    num+= st.top(); st.pop();                
                }
                reverse(num.begin(), num.end());
                int n = stoi(num);
                string rep;
                //cout<<"temp="<<temp<<"n="<<n<<endl;
                for(int i = 0; i<n;i++)
                    rep+=temp;
                //cout<<"After repitition temp="<<rep;

                for(int i = 0; i<rep.length(); i++)
                    st.push(rep[i]);                
            }
        }
        
        string res;
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }

int main()
{
    string s1 = "3[a]2[bc]", s2="2[a2[c]]", s3="2[abc]3[cd]ef";
    cout<<decodeString(s1)<<endl;
    cout<<decodeString(s2)<<endl;
    cout<<decodeString(s3)<<endl;
    return 0;
}