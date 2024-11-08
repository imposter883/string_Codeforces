#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    if (n == 1) {
        cout << vec[0] << endl;
        return 0;
    }

    string str1 = vec[0];
    int count1 = 1, count2 = 0;
    string str2 = "";

    for (int i = 1; i < n; i++) {
        if (vec[i] == str1) {
            count1++;
        } else if (str2 == "" || vec[i] == str2) {
            str2 = vec[i];
            count2++;
        } else {
            count2++;
        }
    }

    if (count1 > count2) {
        cout << str1 << endl;
    } else {
        cout << str2 << endl;
    }

    return 0;
}
