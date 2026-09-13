#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    int ans = INT_MIN;

    cout << "Enter 5 numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> n;

        if (n > ans) {
            ans = n;
        }
    }

    cout << "Minimum number = " << ans;

    return 0;
}