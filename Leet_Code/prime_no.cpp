#include<iostream>
using namespace std;
int main(){
    int n = 7;

    if(n<=0){
        cout << "not prime";
        return 0;
    }

    int i=2;
    int prime = 1;

    while(i<n){
        if(n%i == 0){
            prime = 0;
            break;
        }
        i++;
    }

    if(prime){
        cout << "prime";
    }
    else{
        cout << "not prime";
    }
}