#include<iostream>
using namespace std;
int main(){
    int arr[8] = {3,4,-2,5,8,20,-10,8};
    int n = 8;
    int sum = 0;
    int a[n];

    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int prefix = 0;

    for(int i=0;i<n-1;i++){
        prefix+=arr[i];
        int ans = sum - prefix;
        if(ans == prefix){
            cout << "true";
            break;
        }
    }
    
}