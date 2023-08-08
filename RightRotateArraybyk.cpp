#include<iostream>
using namespace std;

void Right_rotate_array_by_k(int *arr,int n,int k){
    int temp[k];
    //copy array by k place from the end
    for(int i=n-k;i<n;i++) temp[i-n+k]=arr[i];
    //shift the array right
    for(int i=n-k-1;i>=0;i--)arr[i+k]=arr[i];
    for(int i=0;i<k;i++)arr[i]=temp[i];

    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    Right_rotate_array_by_k(arr,n,k);
}