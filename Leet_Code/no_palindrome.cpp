#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x = 121;
    int n = x;
    int no = x;
    int count = 0;

         while(x!=0){
            int rem = x % 10;
            x/=10;
            count++;
        }

        int ans = 0;
        
        while(n!=0){
            int rem = n % 10;
            n/=10;
           ans=ans * 10 + rem;
        }

        if(ans==no){
            cout<<"yes";
        }else{
            cout<<"no";
        }
    }
