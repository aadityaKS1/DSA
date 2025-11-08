#include<bits/stdc++.h>
using namespace std;
//optimal
int LongSeq(vector<int> nums){
    int n=nums.size();
    if( nums.size()==0)  return 0;
    unordered_set<int> st;
    int longest=1;
    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){// if it-1 one less element not in set 
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt=cnt+1;

            }
            longest=max(longest,cnt);

        }
    }
    return longest;
    
}
//beetter
// int LongSeq(vector<int> nums, int n){
//     if( nums.size()==0)  return 0;
//     sort(nums.begin(),nums.end());
//     int lastSmaller=INT_MIN;
//     int cnt=0;
//     int longest=1;
//     for(int i=0;i<n;i++){
//         if(nums[i]-1==lastSmaller){
//             cnt+=1;
//             lastSmaller=nums[i];
//         }
//         else if(lastSmaller!=nums[i]){
//             cnt=1;
//             lastSmaller=nums[i];
//         }
        
//         longest=max(longest,cnt);
//     }
//     return longest;
    
// }
//brute force
// int LongSeq(vector<int> nums, int n){
//     int longest=1;
//     for(int i=0;i<n;i++){
//         int cnt=1;
//         int x=nums[i];
//         while(find(nums.begin(),nums.end(),x+1)!=nums.end()){
//             x+=1;
//             cnt++;
//         }
        
//         longest=max(longest,cnt);
//     }
//     return longest;
    
// }


int main()
{
    vector<int> nums={100,102,100,101,101,5,4,3,2,3,1,1,1,2};
    int result=LongSeq(nums);
    cout<<result;
    return 0;
}