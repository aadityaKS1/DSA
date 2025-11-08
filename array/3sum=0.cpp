#include <bits/stdc++.h>
using namespace std;
// BRUTEFORCE

// vector<vector<int>> sum3equal0(vector<int> &nums)
// {
//     set<vector<int>> ans;
//   for(int i=0;i<nums.size();i++){
//     for(int j=i+1;j<nums.size();j++){
//         for(int k=j+1;k<nums.size();k++){
//             if(nums[i]+nums[j]+nums[k]==0)
//             {
//                 vector<int> temp={nums[i],nums[j],nums[k]};
//                 sort(temp.begin(),temp.end());
//                 ans.insert(temp);
//             }
//         }
//     }
//   }
//   vector<vector<int>> result (ans.begin(),ans.end());
//   return result;
// }
// better
// vector<vector<int>> sum3equal0(vector<int> &nums)
// {
//     set<vector<int>> st;
//   for(int i=0;i<nums.size();i++){
//     set<int> hashset;
//     for(int j=i+1;j<nums.size();j++){
//         int third=-(nums[i]+nums[j]);
//         if(hashset.find(third)!=hashset.end()){
//             vector<int> temp={ nums[i],nums[j],third};
//             sort(temp.begin(),temp.end());
//             st.insert(temp);
//         }
//         hashset.insert(nums[j]);

//     }
//     }

//   vector<vector<int>> ans (st.begin(),st.end());
//   return ans;
// }
// optimal
vector<vector<int>> sum3equal0(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 and nums[i] == nums[i - 1])
            continue;
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])
                    j++;
                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, 4};
    vector<vector<int>> result = sum3equal0(nums);
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