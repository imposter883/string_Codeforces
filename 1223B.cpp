#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        // Array to keep track of characters in s1
        vector<bool> char_exists(26, false);
        
        // Mark characters present in s1
        for (char ch : s1) {
            char_exists[ch - 'a'] = true;
        }

        // Check if any character in s2 is also in s1
        bool has_common_char = false;
        for (char ch : s2) {
            if (char_exists[ch - 'a']) {
                has_common_char = true;
                break;
            }
        }

        if (has_common_char) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
