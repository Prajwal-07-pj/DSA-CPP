#include<iostream>
using namespace std;
int main(){
    int n ,rem ,count = 0, i, result;
    cout << "Enter any number: ";
    cin >> n;

    while(n>0){
        rem = n % 10;
        n/=10;
        count++;
    }

    for(i=count;i>=0;i--){
        rem = n % 10;
        n/=10;
        result = rem * 10 * i;
    }

    cout << result;

}