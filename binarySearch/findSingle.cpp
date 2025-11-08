#include <bits/stdc++.h>
using namespace std;

int findSingle(vector<int> nums)
{
    // edge conditions;
    int n = nums.size();
    if (n == 1)
        return nums[0];
    if (nums[0] != nums[1])
        return nums[0];
    if (nums[n - 1] != nums[n - 2])
        return nums[n - 1];
    int low = 2, high = n - 3;
    while(low<=high){
        int mid = (low + high) / 2;
        if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid];
        if((mid %2==0 && nums[mid]==nums[mid+1]) || (mid%2==1 && nums[mid]==nums[mid-1])) low=mid+1;
        else high=mid-1;
    }
     return -1;
}

int main()
{
    vector<int> nums = {4, 4, 5, 6, 6, 8, 8, 11, 11};
    int result = findSingle(nums);
    cout << "signle element is : " << result << endl;
}