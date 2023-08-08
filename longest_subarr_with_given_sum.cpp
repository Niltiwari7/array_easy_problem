#include<iostream>
using namespace std;

int longest_sum(int *arr,int n,int res){
    int len=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum==res) len=max(len,j-i+1);
        }
    }
    return len;
}

// better approach

// int longest_sum(int *arr,int n,int res){
//     int len=0;
//     for(int i=0;i<n;i++){
//         long long sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(sum==res)
//             {
//                 len=max(len,j-i+1);
//             }
//         }

//     }
//     return len;
// }
int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << longest_sum(arr, n, k);
}
