#include <bits/stdc++.h>
using namespace std;

//Brute force Algorithm
// int findOnceOccur(vector<int> arr, int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         int num = arr[i];
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == num)
//             {
//                 count++;
//             }
//         }
//         if (count == 1)
//             return arr[i];
//     }
//     return -1;
// }

//better approach
// int findOnceOccur(vector<int> &arr,int n){
//     int maxi=arr[0];
//     for(int i=0;i<n;i++){
//         maxi=max(maxi,arr[i]);

//     }
//     int hash[maxi+1]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     for(int i=0;i<maxi+1;i++){
//         if(hash[arr[i]]==1) return arr[i];
//     }
//     return -1;    
//}
int findOnceOccur(vector<int> &arr,int n){

    map<int,int> freq; 
    for(int x: arr) freq[x]++;
    for(auto p:freq){
        if(p.second==1){
            return p.first;
            break;
        }
    }
    return -1;

}



// //optiomal solution
// int findOnceOccur(vector<int> arr,int n){
//     int Xor=0;
//     for(int i=0;i<n;i++){
//         Xor=Xor^arr[i];
//     }
//     return Xor;
// }

int main()
{
    vector<int> arr = {0, 1, 2,2,3, 1, 0};
    int n = arr.size();
    int once = findOnceOccur(arr, n);
    cout << once;
}