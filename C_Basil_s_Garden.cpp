#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int ans = a.back();

        for (int i = n - 2; i >= 0; ++i)
        {
            if (a[i] <= ans)
            {
                ans++;
            }
            else if (a[i] > ans)
            {
                if (ans)
            }
        }
    }

    return 0;
}