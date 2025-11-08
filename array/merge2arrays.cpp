#include <bits/stdc++.h>
using namespace std;
// BRUTEFORCE
//  void merge2Arrays(vector<int> & arr1,vector<int> & arr2)
// {
//     int n=arr1.size();
//     int m=arr2.size();
//     int left=0;int right=0;
//     int idx=0;
//     vector<int> arr3(n+m);
//     while(left<n && right<m){
//         if(arr1[left]<=arr2[right]) {
//             arr3[idx]=arr1[left];
//             left++,idx++;
//         }
//         else{
//             arr3[idx]=arr2[right];
//             right++,idx++;
//         }
//     }
//     while(left<n) arr3[idx++]=arr1[left++];
//     while(right<m) arr3[idx++]=arr2[right++];
//     for(int i=0;i<n+m;i++){
//         if(i<n) arr1[i]=arr3[i];
//         else arr2[i-n]=arr3[i];
//     }
    
// }
// optimal
//  void merge2Arrays(vector<int> & arr1,vector<int> & arr2)
// {
//     int n=arr1.size();
//     int m=arr2.size();
//     int left=n-1;int right=0;
//     while(left>=0 && right<m){
//         if(arr1[left]>arr2[right]) {
//             swap(arr1[left],arr2[right]);
//             left--,right++;
//         }
//         else break;
//     }
//     sort(arr1.begin(),arr1.end());
//     sort(arr2.begin(),arr2.end());

// }
//optimal 2
void swapIfGreater(vector<int> &arr1,vector<int> & arr2,int idx1,int idx2){
    if(arr1[idx1]>arr2[idx2]){
        swap(arr1[idx1],arr2[idx2]);
    }
}
 void merge2Arrays(vector<int> & arr1,vector<int> & arr2,int n,int m)
{
    int len=n+m;
    int gap=(len/2)+(len%2);
    while(gap>0){
        int left=0;
        int right=left+gap;
        while(right<len){
            if(left<n  && right>=n){
                swapIfGreater(arr1,arr2,left,right-n);
            }
            else if(left>=n){
                swapIfGreater(arr2,arr2,left-n,right-n);
    
            }
            else {
                swapIfGreater(arr1,arr1,left,right);
            }
            left++,right++;

        }
        if(gap==1) break;
        gap=(gap/2)+(gap%2);
    }
}

int main()
{
    vector<int> arr1 = {1, 4, 8, 10};
    vector<int> arr2 = {2,3,9};
    int n=arr1.size();
    int m=arr2.size();
    merge2Arrays(arr1,arr2,n,m);
    for (auto it : arr1)
    {
        cout << it<<" ";
    }
    cout<<endl;
    for (auto it : arr2)
    {
        cout<<it<<" ";
    }
}