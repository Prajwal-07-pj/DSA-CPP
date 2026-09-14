#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,4,5,6};
    int sum =0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }

    int ans = (5+1)*(5+2)/2; // (n+1) * (n+2)/2

    cout << ans - sum;
}