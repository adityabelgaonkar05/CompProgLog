#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    int numnegs = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] < 0)
            numnegs++;
    }

    return 0;
}