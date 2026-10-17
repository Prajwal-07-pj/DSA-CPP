#include<iostream>
using namespace std;
int main(){
    string s = "Prajwal";
    char c = s[0];

    int i=1;

    while(i<s.size()){
        s[i-1] = s[i];
        i++;
    }

    s[s.size()-1] = c;

    cout << s;
}