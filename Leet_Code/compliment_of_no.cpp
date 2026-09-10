#include<iostream>
using namespace std;
int main(){
    int n ,rem , mul=1 , ans=0;

    cout << "Enter any no :";
    cin >> n;

    while(n){
        rem = n % 2;
        rem = rem^1;
        n/=2;
        ans = ans + rem * mul;
        mul*=2;
    }

    cout << ans;

}