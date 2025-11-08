#include<bits/stdc++.h>
using namespace std;
//optimal
vector<int> printLeaders(vector<int> arr){
    int n=arr.size();
    int maxi=INT_MIN;
    vector<int> ans;
    for(int i =n-1;i>=0;i++){
        if(arr[i]>=maxi){
            
            ans.push_back(arr[i]);
        } 
        maxi=max(maxi,arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;

 }



int main()
{
    cout<<"HI";
    vector<int> arr={10,22,12,3,0,6};
    vector<int> result =printLeaders(arr);
    for(int x:result) cout<<x<<" ";
    cout<<endl;
    return 0;

}