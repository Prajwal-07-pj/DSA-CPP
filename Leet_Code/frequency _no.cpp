#include<iostream>
using namespace std;
int main(){
    int arr[7] = {4,3,5,2,5,1,2};
    int n = 7;
    int ans[n];


    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }

    for(int i=0;i<n;i++){
       ans[i]=arr[i]/n;
    }

     for(int i=0;i<n;i++){
       cout << ans[i] << " ";
    }
}