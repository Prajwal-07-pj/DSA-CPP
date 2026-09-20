#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no to find the sqaure root : ";
    cin >> n;
    int i=1,j=n,mid,result;

    while(i<=j){
        mid = i+(j-i)/2;
        if(mid == n/mid){
           result = mid;
            break;
        }else if(mid<n/mid){
            result = mid;
            i = mid + 1;
        }else{
            j = mid - 1;
        }
    }

     cout << "Square root of " << n << " is : " << result;


}