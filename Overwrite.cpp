#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        if (n < m)
        {
            for (auto i : a)
                cout << i << ' ';
            cout << '\n';
            continue;
        }

        // 233364 is possible with 299999 and 364

        vector<int> newb;

        int ind = min_element(b.begin(), b.end()) - b.begin();

        for (int i = ind; i < m; ++i)
        {
            newb.push_back(b[i]);
        }

        for (int i = 0; i < ind; ++i)
            newb.push_back(b[i]);

        for (int i = 0; i < n - m; ++i)
        {
            if (a[i] > newb[0])
            {
                cout << newb[0] << ' ';
            }
            else
            {
                cout << a[i] << ' ';
            }
        }

        vector<int> lastm;

        for (int i = n - m; i < n; ++i)
        {
            lastm.push_back(a[i]);
        }

        if (lastm < newb)
        {
            for (auto i : lastm)
                cout << i << ' ';
        }

        else
        {
            for (auto i : newb)
                cout << i << ' ';
        }

        cout << '\n';
    }

    return 0;
}

// def least_rotation(s: str) -> int:
//     """Booth's lexicographically minimal string rotation algorithm."""
//     m = len(s)
//     f = [-1] * (2 * n)
//     k = 0
//     for j in range(1, 2 * n):
//         i = f[j - k - 1]
//         while i != -1 and s[j % n] != s[(k + i + 1) % n]:
//             if s[j % n] < s[(k + i + 1) % n]:
//                 k = j - i - 1
//             i = f[i]
//         if i == -1 and s[j % n] != s[(k + i + 1) % n]:
//             if s[j % n] < s[(k + i + 1) % n]:
//                 k = j
//             f[j - k] = -1
//         else:
//             f[j - k] = i + 1
//     return k

int least(vector<int> &b, int m)
{
    vector<int> f(2 * m, -1);
    int k = 0;

    for (int i = 1; i < 2 * m; ++i)
    {
        int j = f[i - k - 1];
        while (j != -1 && b[i % m] != b[(k + j + 1) % m])
        {
            if (b[i % m] < b[(k + j + 1) % m])
            {
                k = i - j - 1;
            }
            j = f[j];
        }

        if (j == -1 && b[i % m] != b[(k + j + 1) % m])
        {
            if (b[i % m] < b[(k + j + 1) % m])
            {
                k = i;
            }
            f[i - k] = -1;
        }

        else
        {
            f[i - k] = j + 1;
        }
    }

    return k;
}