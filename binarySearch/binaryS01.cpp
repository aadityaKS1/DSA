#include <bits/stdc++.h>
using namespace std;

// iterative approach
//  int binSearch(vector<int> nums,int n,int target){
//      int low=0,high=n-1;
//      while(low<=high){
//          int mid=(low+high)/2;
//          if(nums[mid]==target) return mid;
//          else if(target<nums[mid]) high=mid-1;
//          else low=mid+1;
//      }
//      return -1;
//  }

// recursive apporach
int binSearch(vector<int> nums, int low, int high, int target)
{
    if (low > high)
        return -1;
    int mid = low + ((high - low) / 2); // when target is int max
    if (nums[mid] == target)
        return mid;
    else if (target > nums[mid])
        return binSearch(nums, mid + 1, high, target);
    else
        return binSearch(nums, low, mid - 1, target);
}

int main()
{
    vector<int> nums = {3, 4, 6, 7, 9, 12, 16, 17};
    int low = 0;
    int high = (nums.size()) - 1;
    int target = 6;
    int result = binSearch(nums, low, high, target);
    cout << "Target is at index: " << result;
}