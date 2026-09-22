#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 4, 8, 9} , k = 3;
    int n = 5;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int start = 1 , end , mid , ans ;
    int end = arr[n-1] - arr[0];
    int ans = 0;

    while(start<=end){
        int mid = start + (end - start) / 2;
        int count = 1;
        int pos = arr[0];

        for(int i=1;i<n;i++){
            if(arr[i] - pos >= mid){
                count ++;
                pos = arr[i];
            }
        }

         if(count < k) {
                end = mid - 1;
            }
            else {
                ans = mid;
                start = mid + 1;
            }
    }

    cout << ans;

}