#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)cin>>arr1[i];
    for(int i=0;i<m;i++)cin>>arr2[i];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr1[i]]++;
    }
    for(int i=0;i<m;i++)mp[arr2[i]]++;
    for(auto it:mp)cout<<it.first<<" ";
}