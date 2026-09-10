#include<iostream>
using namespace std;
int main(){

    int n ;

    cout << "Enter any number :";
    cin >> n;

    for(int i=1;i<=n;i++){
        if(i*i==n){
            cout << "Square root of " << n << " is " << i;
            return 0;
        }
    }


}