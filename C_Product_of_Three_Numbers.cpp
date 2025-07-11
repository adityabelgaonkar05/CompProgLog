#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

vector<int> primefactors(int n)
{
    vector<int> ans;
    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0 && n)
        {
            ans.push_back(i);
            n /= i;
        }
    }

    if (n > 1)
        ans.push_back(n);

    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ff = primefactors(n);

        // for (auto &i : ff)
        //     cout << i << ' ';
        // cout << '\n';

        if (ff.size() >= 3)
        {
            int a = ff[0];

            int b = ff[1];
            int startnext = 2;
            if (b == a)
            {
                b *= ff[2];
                startnext = 3;
            }

            int c = 1;

            for (int i = startnext; i < ff.size(); ++i)
            {
                c *= ff[i];
            }

            // cout << a << ' ' << b << ' ' << c << '\n';

            if (c == 1 || c == a || c == b)
                cout << "NO\n";
            else
            {
                cout << "YES\n"
                     << a << ' ' << b << ' ' << c << '\n';
            }
        }

        else
            cout << "NO\n";
    }

    return 0;
}