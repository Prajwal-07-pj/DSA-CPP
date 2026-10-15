#include<iostream>
using namespace std;
int main(){
    string phase = "A man, a pln, a canal: Panama";
    string r;

    for(int i=0;i<phase.size();i++){
        if(isalpha(phase[i])){
            r += tolower(phase[i]);
        }
    }

    
        int start = 0 , end = r.size()-1;

        while(start<=end){
            if(r[start]!=r[end]){
                cout << "no";
                break;
            }
            start++;
            end--;
        }

        cout << "yes";

    
}