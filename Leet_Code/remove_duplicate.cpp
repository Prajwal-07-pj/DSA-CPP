#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,3,3,4,5};
    int n = 5;
    int i = 0;

    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }

    for(int j=0;j<i+1;j++){
        cout << arr[j] << " ";
    }

    
}