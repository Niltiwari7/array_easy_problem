#include<iostream>
using namespace std;

int main(){
    int n=5;
    
    int arr[]={1,2,4,5};

    int sum=0;
    for(int i=0;i<4;i++)sum+=arr[i];
    int ans=(n*(n+1))/2;
    cout<<ans-sum;
}