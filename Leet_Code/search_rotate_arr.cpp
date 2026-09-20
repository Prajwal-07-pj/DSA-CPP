#include<iostream>
using namespace std;
int main(){
    int arr[6] = {2,3,4,10,0,1};
    int n = 6;
    int i=0,j=n-1,key=0,mid;

    while(i<=j){
        mid = i+(j-i)/2;
        if(arr[mid] == key){
            cout << mid;
            break;
        }else if(arr[mid]>key){
            i=mid+1;
        }else{
            j = mid - 1;
        }

    }
}