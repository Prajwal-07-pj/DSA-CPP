
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[6] = {0, 1, 2, 3, 4, 5};
    int n = 6, target = 10;

    // Bubble Sort
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // 4 Sum
    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {

            int start = j + 1;
            int end = n - 1;

            while (start < end) {
                int sum = arr[i] + arr[j] +
                          arr[start] + arr[end];

                if (sum == target) {
                    cout << arr[i] << " " << arr[j]
                         << " " << arr[start] << " "
                         << arr[end] << endl;
                    start++;
                    end--;
                }
                else if (sum < target) {
                    start++;
                }
                else {
                    end--;
                }
            }
        }
    }
}
