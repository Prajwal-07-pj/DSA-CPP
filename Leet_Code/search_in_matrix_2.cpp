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
    int start = 0 , end = (4*4)-1;

    while(start<=end){
        int mid = (start+end)/2;
        int row = mid/n;
        int col = mid%n;

        if(arr[row][col] == 7){
            cout << "Element find at : " << row << " " << col;
            break;
        }
        else if(arr[row][col] < 7){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
}