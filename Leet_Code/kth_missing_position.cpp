#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 6, 7, 10};
    int n = 6;
    int a[100];

    for (int i = 0; i < n - 1; i++) {
        int current = arr[i];
        int next = arr[i + 1];

        for (int x = current + 1; x < next; x++) {
            arr[i] = x;
        }
    }

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    return 0;
}