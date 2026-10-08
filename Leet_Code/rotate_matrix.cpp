#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int ans[4][4];

    int n = 4;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-1-i] = arr[i][j];
        }
    }

      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
}