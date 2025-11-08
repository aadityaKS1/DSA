//brute force algorithm
#include <iostream>
using namespace std;
void findLargest(int arr[], int n)
{
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {

            largest = i;
        }
    }
    cout << "largest :" << arr[largest]<<endl;
}
void bubbleSort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted Array :" ;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void secondLargest(int arr[], int n)
{   
   
     int secLar;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != arr[n-1])
        {
             secLar= arr[i];
             break;
        }
    }
    cout<<"Second largest :"<<secLar<<endl;
}
int main()
{
    int arr[] = {34, 454, 66, 322, 666, 343, 788};
    int n = sizeof(arr) / sizeof(arr[0]);
    findLargest(arr, n);
    bubbleSort(arr,n);
    secondLargest(arr, n);
}