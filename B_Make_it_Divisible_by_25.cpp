#include <bits/stdc++.h>
#define int long long
using namespace std;

int findmod(string &s, int c, char tar) {
    for (int i = c; i < s.size(); ++i) {
        if (s[i] == tar) return i;
    }
    return INT32_MAX;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        int first0 = findmod(s, 0, '0');
        int first5 = findmod(s, 0, '5');
        int after0 = first0 != INT32_MAX ? min(findmod(s, first0 + 1, '0'), findmod(s, first0, '5')) : INT32_MAX;
        int after5 = first5 != INT32_MAX ? min(findmod(s, first5 + 1, '7'), findmod(s, first5, '2')) : INT32_MAX;
        // cout << first0 << " " << after0 << "\n" << first5 << " " << after5 << "\n";
        if

        cout << min(after0, after5) << endl;
    }
    return 0;
}