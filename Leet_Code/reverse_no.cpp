#include<iostream>
using namespace std;
int main(){
    int n ,rem, result=0;
    cout << "Enter any number: ";
    cin >> n;

    while(n){
        rem = n % 10;
        n/=10;
        result = result * 10 + rem;
    }

    cout << result;

}