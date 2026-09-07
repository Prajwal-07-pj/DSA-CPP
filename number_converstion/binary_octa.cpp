#include<iostream>
using namespace std;
int main(){
    int n , i , mul=1,rem,ans=0;
    cout<<"Enter a binary number: ";
    cin>>n;

    while(n>0){
        rem = n % 10;
        n/=10;
        ans = rem * mul + ans;
        mul*=2;
    }

    mul = 1;
    n = ans;
    ans = 0;

    while(n>0){
        rem = n % 8;
        n/=8;
        ans = rem * mul + ans;
        mul*=10;
    }

    cout << ans;

}