#include<bits/stdc++.h>
using namespace std;
// vector<int> findIntersection(int arr1[],int n1,int arr2[],int n2){
//     int visited[n2]={0};// all the elements are initialized to zero
//     vector<int> ans;
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(arr1[i]==arr2[j]  && visited[j]==0){
//                 ans.push_back(arr1[i]);
//                 visited[j]=1;
//                 break;
//             }
//             if(arr2[j]>arr1[i]){
//                 break;
//             }
//         }
//     }
//     return ans;

// }
vector<int> findInstersection(int arr1[], int n1, int arr2[], int n2) {
    vector<int> ans;
    int i = 0, j = 0;
    while( i<n1 &&j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if (arr2[j]<arr1[i]){
            
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

        
    }
    return ans;
}
int main(){
    int arr1[]={1,2,3,4,4,5};
    int arr2[]={2,3,4,4,5,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> ans=findInstersection(arr1,n1,arr2,n2);
    for(int x:ans){
        cout<<x<<" ";
    }

}