#include<bits/stdc++.h>
using namespace std;

// void arrangePosNeg(vector<int> &arr,int n){
//     vector<int> pos;
//     vector<int> neg;
//     for(int i=0;i<n;i++){
//         if(arr[i]>0) pos.push_back(arr[i]);
//         if(arr[i]<0) neg.push_back(arr[i]);
//     }
//     for(int i=0;i<n/2;i++){
//         arr[2*i]=pos[i];
//         arr[2*i+1]=neg[i];
//     }
// }
vector<int> arrangePosNeg(vector<int>arr,int n){
    vector<int> ans(n,0);
    int posIdx=0,negIdx=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0) 
        {
            ans[posIdx]=arr[i];
            posIdx+=2;
        }
        else{
            ans[negIdx]=arr[i];
            negIdx+=2;
        }
    }
    return ans;
}

int main()
{
    vector<int>arr={1,2,-3,-1,-2,3};
    int n=arr.size();
    vector<int> result=arrangePosNeg(arr,n);
    for(int x: result) cout<<x<<" ";

    return 0;
}