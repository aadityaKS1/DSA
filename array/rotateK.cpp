
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int st,int end){
    while (st<=end)
    {
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    
    
}
void RotateKLeft(int arr[],int k,int n){
    reverseArray(arr,0,k-1);
    reverseArray(arr,k,n-1);
    reverseArray(arr,0,n-1);

}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    int k=3;
    k=k%n;
    RotateKLeft(arr,3,n);
    for(auto x:arr) cout<<x<<" ";
    //brute
    // int temp[k];
    // for(int i=0;i<k;i++){
    //     temp[i]=arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     arr[i]=arr[i+k];

    // }
    // for(int i=0;i<k;i++){
    //     arr[n-k+i]=temp[i];
    // }
    // // for(int i=n-k;i<n;i++){
    // //     arr[i]=temp[i-(n-k)];
    // // }
    // for(auto x:arr)cout<<x<<" ";
    // //optimal 


}