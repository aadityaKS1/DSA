#include<bits/stdc++.h>
using namespace std;
int findSecondLarge(int arr[],int n){
    int largest=arr[0];
    int secondLargest=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
             secondLargest=largest;
             largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }
    if(secondLargest==INT_MIN){             //for arr={5,5,5}
        cout<<"No second largest element found ."<<endl;
    }
    return secondLargest;
    
}
int findSecondSmallest(int arr[],int n){
    int smallest=arr[0];
    int secondSmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
             secondSmallest=smallest;
             smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<secondSmallest){
            secondSmallest=arr[i];
        }
    }
    if(secondSmallest==INT_MAX){             //for arr={5,5,5}
        cout<<"No second smallest element found ."<<endl;
    }
    return secondSmallest;
    
}
int main(){
    int arr[]={1,2,4,7,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int secL=findSecondLarge(arr,n);
    cout<<secL<<endl;
    int secS=findSecondSmallest(arr,n);
    cout<<secS;
}

//not optimal but better
// for(int i=1;i<n;i++){
//     if(arr[i]>largest){
//         largest=arr[i];
//     }
// }
// int secondLargest=-1;   
// for(int i=0;i<n;i++){
//     if(arr[i]>secondLargest && arr[i]!=   largest){
//         secondLargest=arr[i];
//     }
// }