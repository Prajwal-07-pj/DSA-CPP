#include<iostream>
using namespace std;
int main(){
    int n , rem , mul = 1, ans;

    cout << "Enter any decimal number ";
    cin >> n;

    while(n>0){
        rem = n % 8;
        n/=8;
        ans = rem * mul + ans;
        mul*=10;
    }

    cout << ans;
}