#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[6] = {2,3,4,10,8,5};
    int n = 6;
    int i=0,j=5,mid;
    int ans =0;

    while(i<=j){
        mid = j+(i-j)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            ans = arr[mid];
            break;
        }
        else if(arr[mid] > arr[mid-1]){
            i = mid+1;
        }
        else{
            j = mid-1;
        }
    }

    cout << ans;

}