#include<bits/stdc++.h>
using namespace std;
int findOne( vector<int> &arr,int st,int n){
    int maxcount=0;
    int currentcount=0;
     for(int i=st;i<n;i++){
         if(arr[i]==1){
            currentcount++;
            maxcount=max(maxcount,currentcount);
           
            findOne(arr,i+1,n);

     }
     else if(arr[i]==0)  currentcount=0;

     }
     return maxcount;

}

int main(){
    vector<int> arr={1,1,1,1,0,1,1,1};
    int n=arr.size();
    int maxcount=findOne(arr,0,n);
    cout<<maxcount;



}