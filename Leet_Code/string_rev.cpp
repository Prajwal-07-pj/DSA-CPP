#include<iostream>
using namespace std;
int main(){
    string name = "Prajwal";

    // for(int i=7;i>=0;i--){
    //     cout <<name[i];
    // }

    // int start = 0 , end = 6;
    // while(start<end){
    //     swap(name[start],name[end]);
    //     start++;
    //     end--;
    // }

    // cout << name;

    int i=0;

    while(name[i]!='\0'){
        i++;
    }

    cout << i;
}