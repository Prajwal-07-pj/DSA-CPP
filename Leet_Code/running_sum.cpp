#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};

    // for(int i=0;i<5;i++){
    //     arr[i]= arr[i] + arr[i+1];
    // }

    int i=1;

    while(i<=5){
        arr[i] = arr[i] + arr[i-1];
        i++;
    }

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
}