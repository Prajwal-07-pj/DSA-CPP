#include<iostream>
using namespace std;
int main(){
    int n , rem=0, result=0;
    cout << "Enter the no : ";
    cin >> n;

    int no = n;

    while(n>0){
        rem = n % 10;
        n/=10;
        result+=rem;

        if(result >= 10){
            n = result;
            result = 0;
            rem = n % 10;
            n/=10;
            result+=rem;
        }

    }

    cout << result;

}