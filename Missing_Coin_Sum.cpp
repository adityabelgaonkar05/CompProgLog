#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    int num1s = 0;
    for (auto &i : a)
    {
        cin >> i;
        if (i == 1)
            num1s++;
    }

    sort(a.begin(), a.end());

    if (num1s == 0)
    {
        cout << 1 << '\n';
        return 0;
    }

    vector<int> b;
    b.push_back(a[0]);

    for (int i = 1; i < n; ++i)
    {
        b.push_back(b.back() + a[i]);
    }

    for (int i = 0; i < n - 1; ++i)
    {
        if (b[i] + 1 < a[i + 1])
        {
            cout << b[i] + 1;
            return 0;
        }
    }

    cout << b[n - 1] + 1;

    return 0;
}