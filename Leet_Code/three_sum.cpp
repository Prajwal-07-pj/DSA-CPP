#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1, 4, 45, 6, 10, 8};
    int n = 6 , target = 13;

    for(int i=0;i<n-2;i++){
        int ans = target-arr[i];
        int start = i+1 , end = n-1;
        while(start<end){
            if(arr[start]+arr[end]==ans){
                cout<<arr[i]<<" "<<arr[start]<<" "<<arr[end]<<endl;
                break;
            }
            else if(arr[start]+arr[end]<ans){
                start++;
            }
            else{
                end--;
            }
        }
    }
    
}