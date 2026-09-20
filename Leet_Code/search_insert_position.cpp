#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,9};
    int key = 5;
    int i=0,j=4,mid;
    int index = 4;

    while(i<=j){
        mid=i+(j-i)/2;
        if(arr[mid]==key){
            index = mid;
            break;
        }
        else if(arr[mid]<key){
            i = mid + 1;
        }else{
            index = mid;
            j  = mid-1;
        }
    }

    // always remainder that low is the best position to insert 
    // the value in binary search
    // alternate code same as binary only return low  

    cout << index;
}