#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        vector<vector<int>> a;
        for(int i = 0; i < n; ++i)
        {
            vector<int> temp(m);
            for(auto &i : temp) cin >> i;
            a.push_back(temp);
        }

        int total = 0;

        for(int i = 0; i < m; ++i)
        {
            int curr = 0;
            vector<int> b;
            for(int j = 0; j < n; ++j)
            {
                b.push_back(a[j][i]);
            }

            sort(b.begin(), b.end());

            for(int j = 0; j < n; ++j)
            {
                total += ((b[j] * j) - curr);
                curr += b[j];
            }
            b.clear();
        }

        a.clear();

        cout << total << "\n";
    }

    return 0;
}