#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}   
};
ListNode* addAtBeg(ListNode *head, int data)
{
    ListNode temp(data, head);
    head = &temp;
    return head;
}
ListNode* makeLLFromVector(vector<int> &vec)
{
    ListNode *head=NULL;
    reverse(vec.begin(), vec.end());
    for(auto i : vec)
    {
        head = addAtBeg(head, i);
    }
    return head;
}


void traverse(ListNode *head)
{
    while(head)
    {
        cout<<head->val<<"\t";
        head = head->next;
    }
    cout<<endl;
    
}
int main()
{
    vector<int> v = {1,2,6,3,4,5,6};
    ListNode *head = makeLLFromVector(v);
    traverse(head);
    return 0;
}