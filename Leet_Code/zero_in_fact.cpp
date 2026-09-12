#include<iostream>
using namespace std;

int zero_in_fact(int n){
    int fact = 1 , count = 0;
    while(n>=5){
        count+=n/5;
        n/=5;
    }
    return count;
}

int main(){
    int n ;
    cout << "Enter any number : ";
    cin >> n;

    cout << zero_in_fact(n);
}