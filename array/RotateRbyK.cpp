
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int st,int end){
    while (st<end)
    {
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    
    
}
void rotateRight(int arr[],int k,int n){
    reverseArray(arr,0,n-1);
    reverseArray(arr,0,k-1);
    reverseArray(arr,k,n-1);
    

}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    int k=3;
    k=k%n;
    rotateRight(arr,k,n);
    for(auto x:arr) cout<<x<<" ";



}