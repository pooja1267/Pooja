#include<iostream>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end = m+n-1;
        int i=m-1;
        int j=n-1;
        while(j>=0 && i>=0)
        {
            if(nums1[i] > nums2[j])
            {
                nums1[end--] = nums1[i--];
            }
            else if(nums1[i] < nums2[j])
            {  
                nums1[end--] = nums2[j--];
            }
            else
            {
                nums1[end--] = nums1[i--];
                nums1[end--] = nums2[j--];                
            }
        }
        while(j>=0)
        {
            nums1[end--] = nums2[j--];
        }        
    }


int main()
{
    vector<int> n1(1,0);
    vector<int> n2 = {1};
    merge(n1,0,n2,1);
    for(auto i:n1)
        cout<<i<<"\t";
    return 0;    
}