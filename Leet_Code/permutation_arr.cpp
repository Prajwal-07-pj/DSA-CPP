#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {0, 2, 1, 5, 3, 4};

    vector<int> ans(nums.size());

    for (int i = 0; i < nums.size(); i++) {
        ans[i] = nums[nums[i]];
    }

    cout << "Answer: ";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}