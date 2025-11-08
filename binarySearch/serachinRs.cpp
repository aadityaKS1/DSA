#include <bits/stdc++.h>
using namespace std;
int searchInRS(vector<int> &nums, int target)
{

    int n = nums.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[low] <= nums[mid])
        { // left is sorted
            if (nums[low] <= target && target <= nums[mid])
                high = mid - 1; // search in left part
            else
                low = mid + 1; // eliminate left part
        }
        // else if (nums[low] == nums[mid] && nums[mid] == nums[high])
        // { // for duplicates adn return true false instead of indexx
        //     low++;
        //     high--;
        // }

        else // right part is sorted
        {
            if (nums[mid] <= target && target <= nums[high])
                low = mid + 1; // search in  right part
            else
                high = mid - 1; // eliminate right part
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {3, 4, 5, 6, 7, 8, 9, 1, 2};
    int target = 6;
    int result = searchInRS(nums, target);
    cout << "Elemetn is at index : " << result << endl;
}