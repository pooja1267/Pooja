#include<iostream>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1;
        int end = arr.size() - 2;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
                return mid;
            else if (arr[mid - 1] < arr[mid] && arr[mid + 1] > arr[mid])
                start = mid + 1;
            else if (arr[mid - 1] > arr[mid] && arr[mid + 1] < arr[mid])
                end = mid - 1;
        }
        return -1;
    }
int main()
{
    vector<int> nums1 = {0,1,0}, nums2 = {0,2,1,0}, nums3 = {0,10,5,2};
    cout<<peakIndexInMountainArray(nums1)<<endl;
    cout<<peakIndexInMountainArray(nums2)<<endl;
    cout<<peakIndexInMountainArray(nums3)<<endl;
    return 0;
}