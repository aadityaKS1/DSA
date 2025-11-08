#include<bits/stdc++.h>
using namespace std;
//insertion_sortusing recurison
void insertionSort(vector<int> &arr,int i,int n){
    if(i==n) return ;
    int j=i;
    while( j>0 && arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
        j--;
    }
    insertionSort(arr,i+1,n);

}





int main(){
    vector<int> arr={23,54,7,3,32,45,12};
    int n=arr.size();
    insertionSort(arr,0,n);
    for(int x  : arr) cout<<x<<" ";
    return 0;

}

