#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[5] = {2,4,6,7,3};
    int max = INT_MIN;
    int second_max = INT_MIN;

    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i=0;i<5;i++){
        if(arr[i]>second_max && arr[i]<max){
            second_max = arr[i];
        }

    }

    cout << second_max;

}