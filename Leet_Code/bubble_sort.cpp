#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >>n;
    int arr[n];

    cout<<"Enter the values" << endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}