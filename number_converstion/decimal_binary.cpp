#include<iostream>
using namespace std;
int main(){
    int n , i , mul=1,rem,ans=0;
    cout<<"Enter a decimal number: ";
    cin>>n;

    while(n>0){
        rem = n % 2;
        n/=2;
        ans = rem * mul + ans;
        mul*=10;
    }

    cout << ans;

}