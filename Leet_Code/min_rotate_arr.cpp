#include<iostream>
using namespace std;
int main(){
    int arr[6] = {4,6,8,10,1,2};
    int n = 6;
    int i=0,j=n-1,mid,ans=arr[0];

    while(i<=j){
        mid = i+(j-i)/2;
        if(arr[mid]>=arr[0]){
            i = mid + 1;
        }else {
            ans = mid;
            j = j - 1;
        }
    }

    cout << ans;
}