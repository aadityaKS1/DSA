#include<bits/stdc++.h>
using namespace std;
//optimal
vector<int> printLeaders(vector<int> & elements,int n){
    int maxi=INT_MIN; 
    vector<int> ans;
    for(int i =n-1;i>=0;i--){
        if(elements[i]>maxi) ans.push_back(elements[i]);
        maxi=max(maxi,elements[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;

 }



int main()
{

    vector<int> elements={10,22,12,3,0,6};
    int n =elements.size();
    vector<int> result =printLeaders(elements,n);
    for(int x:result) cout<<x<<" ";
    cout<<endl;

}