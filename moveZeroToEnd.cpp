#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt=0;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt++;
        }else{
            ans.push_back(arr[i]);
        }
    }
    while(cnt--){
        ans.push_back(0);
    }
    for(auto it:ans)cout<<it<<" ";
}