#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[7] = {2, 3, 10, 6, 4, 8, 1};
    int n = 7;
    int max_n = arr[n-1];
    int diff = 0;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max_n){
            max_n = arr[i];
        }
        else{
            diff = max(diff,max_n-arr[i]);
        }
    }

    cout << diff;
}