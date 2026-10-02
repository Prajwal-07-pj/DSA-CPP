#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = 11;
    int leftmax=0 , rightmax=0 , water = 0;
    int maxheight = leftmax , index = 0;

    for(int i=0;i<n;i++){
        if(arr[i]>maxheight){
            maxheight = arr[i];
            index = i;
        }
    }

    for(int i=0;i<index;i++){
        if(leftmax>arr[i]){
            water+=leftmax-arr[i];
        }else{
            leftmax = arr[i];
        }
    }

    for(int i=n-1;i>index;i--){
        if(rightmax>arr[i]){
            water+=rightmax-arr[i];
        }else{
            rightmax = arr[i];
        }
    }

   
    cout << water;

}