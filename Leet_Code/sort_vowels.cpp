#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s = "lEetcOde";

    vector<int> lower(26, 0), upper(26, 0);
    vector<char> ans;

    // Count vowels and mark their positions
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u') {

            lower[s[i] - 'a']++;
            s[i] = '#';
        }
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                 s[i] == 'O' || s[i] == 'U') {

            upper[s[i] - 'A']++;
            s[i] = '#';
        }
    }

    // Add uppercase vowels in sorted order
    for (int i = 0; i < 26; i++) {
        char c = 'A' + i;

        while (upper[i]) {
            ans.push_back(c);
            upper[i]--;
        }
    }

    // Add lowercase vowels in sorted order
    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;

        while (lower[i]) {
            ans.push_back(c);
            lower[i]--;
        }
    }

    // Put sorted vowels back into their original positions
    int first = 0;
    int second = 0;

    while (second < ans.size()) {
        if (s[first] == '#') {
            s[first] = ans[second];
            second++;
        }
        first++;
    }

    cout << s << endl;
}