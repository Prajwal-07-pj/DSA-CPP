
#include <iostream>
using namespace std;

int main() {
    int arr[7] = {4, 3, 5, 2, 1, 2, 6};
    int n = 7;

    // Convert numbers from 1-based to 0-based
    for (int i = 0; i < n; i++) {
        arr[i]--;
    }

    // Count occurrences
    for (int i = 0; i < n; i++) {
        arr[arr[i] % n] += n;
    }

    // Find missing and duplicate numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] / n == 0) {
            cout << "Missing number: " << i + 1 << endl;
        }

        if (arr[i] / n == 2) {
            cout << "Duplicate number: " << i + 1 << endl;
        }
    }

    return 0;
}
