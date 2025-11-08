#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);

}
}
void bubbleSort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        int did_swap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                did_swap=1;
            }
        }
    //cout<<"runs"<<endl;//runs only one time since the array is already sored by  selection sort
        if(did_swap==0){//this condition satisfies 
            break;
        }
    }
}
void insertionSort(int array[],int n){
    for(int i=0;i<=n-1;i++){
    int j = i;
    while(j > 0 && array[j - 1] > array[j]){//this loops stops first than  for but both are correct and compare j-1 with j coz j+1 doestnot exit for last case
        swap(array[j - 1], array[j]);
        j--;
    }
    //     for(int j=i;j>0;j--){
    //         if(array[j-1]>array[j]){
    //             swap(array[j-1],array[j]);            
    //         }  
    // }
}
}
int main(){
    int arr[]={13,46,24,52,20,9};
    int array[]={14,9,15,12,6,8,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    int size=sizeof(array)/sizeof(array[0]);
    SelectionSort(arr,n);
    cout<<"Selection Sort :";
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubbleSort(arr,n);
    cout<<"Bubble Sort    :";
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionSort(array,size);
    cout<<"Insertion Sort :";
        for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

}