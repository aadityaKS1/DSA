#include <bits/stdc++.h>
using namespace std;

int minRSArray(vector<int> nums)
{
    int low = 0;
    int n = nums.size();
    int high = n - 1;
    int mini = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[low] <= nums[mid])
        {                                // if left part is sorted
            mini = min(mini, nums[low]); // find inleft part
            low = mid + 1;               // elimite left half
        }
        else
        {
            mini = min(mini, nums[mid]);
            high = mid - 1;
        }
    }
    return mini;
}
int timesSorted(vector<int> nums)
{
    int low = 0;
    int n = nums.size();
    int high = n - 1;
    int mini = INT_MAX;
    int idx = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[low] <= nums[high])
        {
            if (nums[low] < mini)
            {
                idx = low;
                mini = min(mini, nums[low]);
            }
            break;
        }
        if (nums[low] <= nums[mid])
        {
            if (nums[low] < mini)

            {                                // if left part is sorted
                idx = low;                   // return index of min
                mini = min(mini, nums[low]); // find inleft part
            }
            low = mid + 1; // elimite left half
        }
        // else if (nums[low] == nums[mid] && nums[mid] == nums[high])
        // { // for duplicates adn return true false instead of indexx
        //    mini=min(arr[low],mini);
        //     low++;
        //     high--;
        // }
        else
        {
            if (nums[mid] < mini)
            {                                // right part is sorted
                idx = mid;                   // return index of min
                mini = min(mini, nums[mid]); // ind min in right part
            }
            high = mid - 1;
        }
    }
    return idx;
}
int main()
{
    vector<int> nums = {3, 4, 5, 6, 7, 8, 9, 1, 2};
    int target = 6;
    int result = minRSArray(nums);
    cout << "minimum element is : " << result << endl;
    int times = timesSorted(nums);
    cout << "Array is sorted    : " << times << " times";
}