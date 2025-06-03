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
        // for each a[i], find a position where it is greater than as many numbers as possible

        int l = 0, r = 0;
        int ans = INT64_MIN;

        int n;
        cin >> n;
        vector<int> a(n);

        for (auto &i : a)
            cin >> i;

        for (int i = 0; i < n; ++i)
        {
            int sc = 0;
            for (int j = i; j < n; ++j)
            {
                if (a[i] > a[j])
                    sc++;
                else if (a[i] < a[j])
                    sc--;

                if (sc > ans)
                {
                    ans = sc;
                    l = i + 1, r = j + 1;
                }
            }
        }

        cout << l << ' ' << r << '\n';
    }

    return 0;
}