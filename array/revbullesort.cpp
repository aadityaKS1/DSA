#include<bits/stdc++.h>
using namespace std;
//bubble_sortusing recurison
void bubbleSort(vector<int> &arr,int n){
    if(n==1)  return;
    int i=0;
    while(i<n-1){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        i++;
    }
    bubbleSort(arr,n-1);

}





int main(){
    vector<int> arr={23,54,7,3,32,45,12};
    int n=arr.size();
    bubbleSort(arr,n);
    for(int x  : arr) cout<<x<<" ";
    return 0;

}

