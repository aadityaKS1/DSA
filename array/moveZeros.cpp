#include<bits/stdc++.h>
using namespace std;
//brute force algo
// void moveZeros(int arr[],int n){
//     int temp[n];
//     int idx=0;
//     for(int i=0;i<n;i++){//0(n)
//         if(arr[i]!=0){
//             temp[idx++]=arr[i];
//         }
//     }
//     for(int i=0;i<idx;i++){// O(x)
//         arr[i]=temp[i];
//     }

//     for(int i=idx;i<n;i++){//O(n-x)
//         arr[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
////optimal souliton
void moveZeros(int arr[],int n){
    int j=-1;
        for(int i=0;i<n-1;i++){
            if(arr[i]==0){
                j=i; 
                break;
            }
        }
        for(int i=j+1;i<n;i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";

        }
    
}
int main(){
    int arr[]={1,0,2,3,2,0,0,4,5,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    moveZeros(arr,n);

}