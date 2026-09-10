#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number : ";
    cin >> n;
    int no = n;
    int rem , rev=0;

    while (n!=0)
    {   
        rem = n % 10;
        n/=10;
        rev = rev * 10 + rem;
    }

    if(rev == no){
        cout << "Palindrome";
    }else{
        cout << "Not a Palindrome";
    }
    

}