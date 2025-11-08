#include <bits/stdc++.h>
using namespace std;
// void merge(vector<int> &arr, int low, int mid, int high)
// {
//     int left = low;
//     int right = mid + 1;
//     vector<int> temp;
//     while (left <= mid && right <= high)
//     {
//         if (arr[left] < arr[right])
//         {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else
//         {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//     while(left<=mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right<=high){
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }

// }
// void mergeSort(vector<int> &arr, int low, int high)
// {
//     int mid = (low + high) / 2;
//     if (low >= high)
//         return;
//     mergeSort(arr, low, mid);
//     mergeSort(arr, mid + 1, high);
//     merge(arr, low, mid, high);
// }
// vector<int> sort012(vector<int>& arr,int n){
//     int count1=0,count2=0,count0=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0) count0++;
//         if(arr[i]==1) count1++;      
//         if(arr[i]==2) count2++;       
//     }
//     // int index=0;
//     // for(int i=0;i<count0;i++) arr[index++]=0;
//     // for(int i=0;i<count1;i++) arr[index++]=1;
//     // for(int i=0;i<count2;i++) arr[index++]=2;
//     for(int i=0;i<count0;i++) arr[i]=0;
//     for(int i=count0;i<count1+count0;i++) arr[i]=1;
//     for(int i=count1+count0;i<n;i++) arr[i]=2;
//     return arr;
// }
//optimal
vector<int>sort012(vector<int> &arr,int n){
    int low=0,mid=0,high=n-1;
    while (mid<=high)
    {
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++,mid++;
        }
        if(arr[mid]==1) mid++;
        if(arr[mid]==2){
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {0,1,0,2,2,1,1,0,0,2,1,2,1};
    int n = arr.size();
//    mergeSort(arr, 0, n-1);
    vector<int> result=sort012(arr,n);
    for(auto x:result) cout<<x<<" ";

}