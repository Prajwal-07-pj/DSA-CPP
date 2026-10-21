#include<iostream>
using namespace std;
int main(){
    string s = "is2 sentence4 This1 a3";

     for(int i=s.size()-2;i>=0;i--){
         bool swaped = 0;
        for(int j=0;j<=i;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
                swaped = 1;
            }
        }
        if(swaped == 0)
        break;
    }

    cout << s;
}