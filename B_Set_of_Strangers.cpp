#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long Solve(int N, vector<int> &A, vector<int> &B) {
    long long maxl = 0;
    long long curr = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] == B[i]) {
            curr++;
        } else {
            maxl = max(maxl, curr);
            curr = 0;
        }
    }
    maxl = max(maxl, curr);

    return maxl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n), B(n);

        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> B[i];
        }

        cout << Solve(n, A, B) << endl;
    }

    return 0;
}
