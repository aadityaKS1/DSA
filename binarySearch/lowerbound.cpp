#include <bits/stdc++.h>
using namespace std;

// lowerbound
 int serachLb(vector<int> nums,int target){
    int n=nums.size();
     int low=0,high=n-1;
     int ans=n;
     while(low<=high){
         int mid=(low+high)/2;

         if(nums[mid]>=target) {
            high=mid-1;
            ans=mid;
         }
         else low=mid+1;
     }
     return ans;
 }
// upper bound
 int serachUb(vector<int> nums,int target){
    int n=nums.size();
     int low=0,high=n-1;
     int ans=n;
     while(low<=high){
         int mid=(low+high)/2;

         if(nums[mid]>target) {
            high=mid-1;
            ans=mid;
         }
         else low=mid+1;
     }
     return ans;
 }
 //serach insert position
 int insertIdx(vector<int> nums,int target){
    int n=nums.size();
     int low=0,high=n-1;
     int ans=n;
     while(low<=high){
         int mid=(low+high)/2;

         if(nums[mid]>=target) {
            high=mid-1;
            ans=mid;
         }
         else low=mid+1;
     }
     return ans;
 }
//floor and ceil
 pair<int,int> FloorCeil(vector<int> nums,int target){
    int n=nums.size();
     int low=0,high=n-1;
     pair<int,int> ans={-1,-1};
     while(low<=high){
         int mid=(low+high)/2;
         if(nums[mid]==target){
            ans.first=nums[mid];
            ans.second=nums[mid];
            break;
         }
         if(nums[mid]>target) {
            high=mid-1;
            ans.second=nums[mid];
         }

         else {
            low=mid+1;
            ans.first=nums[mid];
         }
     }
     return ans;
 }



int main()
{
    vector<int> nums = {3,5,8,9,15,19};
    int low = 0;
    int high = (nums.size()) - 1;
    int target = 9;
    int lb = serachLb(nums,  target);
    cout << "Lower bound is at index: " << lb<<endl;
    int ub = serachUb(nums,  target);
    cout << "upper bound is at index: " << ub<<endl;
    int lbs=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    cout<<"lower bound for direct is :"<<lbs<<endl;
    int ubs=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
    cout<<"upper bound for direct is :"<<ubs<<endl;
    int m=10;
    int insert = insertIdx(nums,  m);
    cout <<m<<"can be inserted  at index: " << insert<<endl;
    int find=7;
    pair<int,int> result = FloorCeil(nums,  find);
    cout <<"Floor for "<<find <<" is : "  << result.first<<endl;
    cout <<"Ceil for "<<find <<" is : "  << result.second<<endl;



}