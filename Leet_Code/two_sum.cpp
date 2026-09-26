#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,7,11,15,27};
    int n = 5 , target = 22;

    int i=0,j=n-1;

    while (i<j)
    {
       if(arr[i]+arr[j]==target){
        cout << i << " "<< j; 
        break;
       }else if (arr[i]+arr[j]>target)
       {
        j--;
       }else{
        i++;
       }
    }
    
}