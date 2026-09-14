#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the elements : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int i=0 , j=4;
    while(i<j)
    {
        swap(arr[i] , arr[j]);
        i++;
        j--;

    }

    cout<<"The reversed array is : ";
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}