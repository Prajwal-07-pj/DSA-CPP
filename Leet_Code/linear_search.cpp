#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the no of elements : ";
    cin >> n;
    int arr[n],key;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key : ";
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout << "Element is found at pos : " << i+1;
            break;
        }
    }

}