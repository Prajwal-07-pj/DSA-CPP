#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[8] = {3,4,-5,8,-12,7,6,-2};
    int n = 8;
    int max_sum = INT_MIN;
    int prefix = 0;

    for(int i=0;i<n;i++){
        prefix+=arr[i];
        if(prefix<0)
        prefix = 0;
        if(prefix>max_sum){
            max_sum = prefix;
        }
    }

    cout << max_sum;

}