#include<iostream>
using namespace std;

int binary_sort(int arr[],int key){
    int i=0,j=4;

    while (i<=j)
    {
        int mid = (i+j)/2;

        if(arr[mid]==key){
            // cout<<"Element found at index "<<mid<<endl;
            return mid;
        }
        else if(arr[mid]<key){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }

    return -1;
    
}

int main(){
    int arr[1000];
    int key;
    cout<<"Enter the no of elements : ";
    int n;
    cin >> n;
    cout<<"Enter values : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    cout << "Enter the key : ";
    cin >> key;
    int result = binary_sort(arr,key);
    if(result!=-1){
        cout << "Element found at : " << result;
    }else{
        cout << "Element not found";
    }

}