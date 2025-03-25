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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        sort(b.begin(), b.end());
        vector<int> news;
        news.push_back(min(b[0] - a[0], a[0]));
        bool cond = 1;

        for (int i = 1; i < n; ++i)
        {
            if (b[0] - a[i] >= news.back() && a[i] >= news.back())
            {
                news.push_back(min(b[0] - a[i], a[i]));
            }

            else if (b[0] - a[i] >= news.back())
            {
                news.push_back(b[0] - a[i]);
            }

            else if (a[i] >= news.back())
            {
                news.push_back(a[i]);
            }

            else
            {
                cond = 0;
                break;
            }
        }

        if (cond)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}