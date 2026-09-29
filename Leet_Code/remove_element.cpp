
#include <iostream>
using namespace std;

int main() {
    int nums[] = {3, 2, 2, 3};
    int n = 4;
    int val = 3;

    int k = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    cout << "Number of elements: " << k << endl;

    cout << "Array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}