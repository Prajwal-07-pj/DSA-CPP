#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}};
    // int ans[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }

    cout << "Transpose Matrix" << endl;

     for(int i=0;i<4-1;i++){
        for(int j=i+1;j<4;j++){
            swap(arr[j][i] , arr[i][j]);
        }
    }

      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }

}