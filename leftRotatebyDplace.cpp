#include<iostream>
using namespace std;
void rotate_array(int *arr,int n,int k){
    int temp[k];
    for(int i=0;i<k;i++)temp[i]=arr[i];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+k];
    }
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-n+k];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];
    rotate_array(arr,n,k);
}