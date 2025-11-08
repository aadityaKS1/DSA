#include<bits/stdc++.h>
using namespace std;
int isSorted(int arr[],int n){
        
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>=arr[i]){

        }
        else{
            return false;

        }
    }
    return true;
}

int main(){
    int arr[]={1,2,9,2,3,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool ans=isSorted(arr,n);
    if(ans) cout<<"Sorted";
    else cout<<"Not Sorted";

    // int i=0;
    // int   issorted=true;
    // while(i<n-1){
    //     if(arr[i+1]<=arr[i]){
    //         issorted=false;
    //         break;
    //     }
    //     i++;
    // }
    // if(issorted) cout<<"Sorted"<<endl;
    // else cout<<"Not sorted "<<endl;


    
        
    
}