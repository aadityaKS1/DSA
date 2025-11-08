#include<bits/stdc++.h>
using namespace std;
// vector<int> findUnion(int arr1[],int m,int arr2[],int n){
//     set<int> st;
   
//     for(int i=0;i<m;i++){
//         st.insert(arr1[i]);
//     }
//     for(int i=0;i<n;i++){
//         st.insert(arr2[i]);
//     }
//     vector<int> temp;
//     for(auto it: st){
//         temp.push_back(it);
//     }
//     return temp;
// }
vector<int> findUnion(int arr1[], int m, int arr2[], int n) {
    vector<int> result;
    int i = 0, j = 0;
    while( i<m &&j<n){
        if(arr1[i]<=arr2[j]){
            if(result.size() ==0 || result.back() != arr1[i]){
                result.push_back(arr1[i]);
            } 
            i++;
        }
        else{
            if(result.size()==0 || result.back()!= arr2[j]){
                result.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j<n){
        if(result.size() ==0 || result.back()!= arr2[j]){
            result.push_back(arr2[j]);
        }
    j++;
    }
    while(i<m){
        if(result.size() ==0 || result.back()!= arr1[i]){
            result.push_back(arr1[i]);
        }
    i++;
    }
    return result;

}

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,3,4,4,5,6};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> result=findUnion(arr1,m,arr2,n);
    for(int x:result){
        cout<<x<<" ";
    }

}