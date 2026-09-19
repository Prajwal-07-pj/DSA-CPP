#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,3,3,4,5};
    int first=-1,last=-1;
    int i=0,j=4;
    int key = 3;

    while(i<=j)
    {
       int mid=i+(j-i)/2;
       if(arr[mid]==key){
        first = mid;
        j = mid -1;
       }
       else if(arr[mid]<key){
        i = mid + 1;
       }
       else{
        j = mid - 1;
       }
    }

    i=0,j=4;

     while(i<=j)
    {
       int mid=i+(j-i)/2;
       if(arr[mid]==key){
        last = mid;
        i = mid + 1;
       }
       else if(arr[mid]<key){
        i = mid + 1;
       }
       else{
        j = mid - 1;
       }
    }
    
    cout << first << " " << last;
}

