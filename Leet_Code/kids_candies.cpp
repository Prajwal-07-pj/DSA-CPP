#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int candies[5] = {2,3,5,1,3}, extraCandies = 3;
    int result[5];
    int max = INT_MIN;

    for(int i=0;i<5;i++){
        if(candies[i]>max){
            max = candies[i];
        }
    }

    for(int i=0;i<5;i++){
        if(candies[i]+extraCandies>=max){
            result[i] = true;
        }else{
            result[i] = false;
        }
    }

    for(int i=0;i<5;i++){
        cout << result[i];
    }
}