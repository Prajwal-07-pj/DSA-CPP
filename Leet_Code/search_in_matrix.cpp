#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int n = 4;
    int x = 7;

    for(int i=0;i<n;i++){
        if(arr[i][0] < x && arr[i][n-1] > x){
            int start = 0 , end = n - 1;
            while(start<=end){
                int  mid = (start+end)/2;
                if(arr[i][mid] == x ){
                    cout << "Element find at : " << i << " " <<mid;
                    break;
                }
                else if(arr[i][mid] < x){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
    }
}