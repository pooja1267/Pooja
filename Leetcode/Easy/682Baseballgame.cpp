#include<iostream>
using namespace std;
int calPoints(vector<string>& operations) {
        stack<int> s;
        for (auto str : operations) {
            if (str == "+") {
                int a = s.top(); s.pop();
                int b = s.top();
                s.push(a);
                s.push(a + b);

            } else if (str == "D") {
                int a = s.top();
                s.push(2 * a);

            } else if (str == "C")
                s.pop();
            else {
                int num = stoi(str);
                s.push(num);
            }
        }

        int sum = 0;
        while (!s.empty()) {
            sum += s.top(); s.pop();
        }

        return sum;
    }
int main()
{
    vector<string> ops1 = {"5","2","C","D","+"}, ops2= {"5","-2","4","C","D","9","+","+"};
    cout<<calPoints(ops1)<<endl;
    cout<<calPoints(ops2)<<endl;
    return 0;
}