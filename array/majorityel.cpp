#include <bits/stdc++.h>
using namespace std;
// BRUTEFORCE
// vector<int> findMajority3(vector<int> &nums)
// {
//     vector<int> list;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (list.size() == 0 || list[0] != nums[i])
//         {
//             int count = 0;
//             for (int j = 0; j < nums.size(); j++)
//             {
//                 if (nums[j] == nums[i])
//                 {
                    
//                     count++;
//                 }
//             }
//             if(count>nums.size()/3){
//                 list.push_back(nums[i]);
//             }
//         }
//         if(list.size()==2) break;
//     }
//     return list;
    
// }
//better approach
// vector<int> findMajority3(vector<int> &nums)
// {
//     vector<int> ans;
//     unordered_map <int,int> mpp;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         mpp[nums[i]]++;
//         if(mpp[nums[i]]==(nums.size()/3)+1){
//             ans.push_back(nums[i]);
//         }
//         if(ans.size()==2) break;
//     }
//     return ans;
    
// }
//optimal solution
vector<int> findMajority3(vector<int> &nums)
{
    int el1=INT_MIN;
    int el2=INT_MIN;
    int cnt1=0;int cnt2=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=el2 && cnt1==0) {
            cnt1=1;    
            el1=nums[i];
        }
        else if(nums[i]!=el1 && cnt2==0) {
            cnt2=1;    
            el2=nums[i];
        }
        else if(el1==nums[i]) cnt1++;
        else if(el2==nums[i]) cnt2++;
        else cnt1--,cnt2--;
    } // this give the 
    //manual check
    cnt1=0,cnt2=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==el1) cnt1++;
        if(nums[i]==el2) cnt2++;
    }
    vector<int> ans;
    if(cnt1>=(nums.size()/3)+1)  ans.push_back(el1);
    if(cnt2>=(nums.size()/3)+1) ans.push_back(el2);
    
    return ans;
}

int main()
{
    vector<int> nums = {1, 1, 1, 3, 3, 2, 2, 2};
    vector<int> result = findMajority3(nums);
    for (auto it : result)
    {
        cout << it << " ";
    }
}