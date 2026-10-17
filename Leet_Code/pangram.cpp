#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s = "thequickbrownfoxjumpsoverthelazydog";
    vector<char> alpha(26,0);
    
   for(int i=0;i<s.size();i++){
    alpha[s[i]-'a'] = 1;
   }

   int f = 0;
   for(int i=0;i<26;i++){
    if(alpha[i] == 0){
        
        f = 1;
        break;
    }
   }

   if(f==1){
    cout << "not";
   }else{
    cout << "pangram";
   }
}