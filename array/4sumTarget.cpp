#include <bits/stdc++.h>
using namespace std;
// BRUTEFORCE

// vector<vector<int>> sum4Target(vector<int> &nums,int target)
// {
//     set<vector<int>> ans;
//   for(int i=0;i<nums.size();i++){
//     for(int j=i+1;j<nums.size();j++){
//         for(int k=j+1;k<nums.size();k++){
//            for(int l=k+1;l<nums.size();l++){
//                 if(nums[i]+nums[j]+nums[k]+nums[l]==target){
//                     vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
//                     sort(temp.begin(),temp.end());
//                     ans.insert(temp);
//                 }
//            }
//         }
//     }
//   }
//   vector<vector<int>> result (ans.begin(),ans.end());
//   return result;
// }
// better
// vector<vector<int>> sum4Target(vector<int> &nums, int target)
// {
//     set<vector<int>> st;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             set<int> hashset;
//             for (int k = j+1; k < nums.size(); k++)
//             {
//                 int fourth = target - (nums[i] + nums[j] + nums[k]);
//                 if (hashset.find(fourth) != hashset.end())
//                 {
//                     vector<int> temp = {nums[i], nums[j], nums[k], fourth};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//                 hashset.insert(nums[k]);
//             }
//         }
//     }

//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }
// optimal
vector<vector<int>> sum4Target(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 and nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (j > i + 1 and nums[j] == nums[j - 1])
                continue;

            int k = j + 1;
            int l = nums.size() - 1;
            while (k < l)
            {
                long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                if (sum < target)
                {
                    k++;
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector<vector<int>> result = sum4Target(nums, target);
    for (auto it : result)
    {
        cout << "[";
        for (auto el : it)
        {
            cout << el << " ";
        }
        cout << "]";
    }
}