#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout << "Enter 4 numbers : ";
    cin >> a >> b >> c >> d;

    if(a==b && c==d || a==c && b==d || a==d && b==c){
        
        cout << "Valid rectangle";
    }
    else{
        cout << "Invalid rectangle";
    }
}