#include<iostream>
using namespace std;
int main(){
    int nums[5] = {0,1,0,3,12};
    int n = 5;

    int j = 0;

    for(int i = 0; i < n; i++) {
    if(nums[i] != 0) {
        swap(nums[i], nums[j]);
        j++;
    }
}
    for(int i=0;i<n;i++){
        cout << nums[i];
    }
        
}