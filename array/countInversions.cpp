#include <bits/stdc++.h>
using namespace std;
//brute
// int findInverison(vector<int> arr)
// {
//     int n = arr.size();
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//                 count++;
//         }
//     }

//     return count;
// }
//bettter /optimal

int merge(vector<int> &arr,int low ,int mid,int high){
        int left=low;
        int right=mid+1;
        vector<int> temp;
        int cnt=0;
        while(left<=mid && right<=high){
            if(arr[left]<arr[right]){
                temp.push_back(arr[left]);
                left++;
            }//right is smaller
            else{
                temp.push_back(arr[right]);
                cnt+=(mid-left+1);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for (int i=low;i<=high;i++){
                arr[i]=temp[i-low];
        }
        return cnt;

}
int mergeSort(vector<int> &arr,int low ,int high){
    if(low>=high) return 0;
    int mid=(low+high)/2;
    int count=0;
    count+=mergeSort( arr, low , mid);
    count+=mergeSort( arr, mid+1, high);
    count+=merge(arr,low,mid,high);
    return count;


}
int findInversion(vector<int> arr,int n){

    return mergeSort(arr,0,n-1);

}
int main()
{
    vector<int> arr = {5, 3, 2, 4, 1};
    int n=arr.size();
    int result = findInversion(arr,n);
    cout << result;
}