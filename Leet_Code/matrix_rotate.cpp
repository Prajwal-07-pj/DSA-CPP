#include <iostream>
using namespace std;

int main() {

    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int n = 4;

    // 90 degree rotation - FIRST TIME
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i = 0; i < n; i++) {
        int start = 0, end = n - 1;

        while(start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    // 90 degree rotation - SECOND TIME
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i = 0; i < n; i++) {
        int start = 0, end = n - 1;

        while(start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    // Print
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}