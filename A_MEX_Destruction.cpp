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
        vector<int> a(n), b;
        for (auto &i : a)
        {
            cin >> i;
            b.push_back(i);
        }

        sort(a.begin(), a.end());
        int mex = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == mex)
            {
                mex++;
            }
        }

        if (a[n - 1] == 0)
        {
            cout << "0\n";
        }

        else if (mex == 0)
        {
            cout << "1\n";
        }

        else if ((b[0] == 0) ^ (b[n - 1] == 0) && count(a.begin(), a.end(), 0ll) == 1)
        {
            cout << "1\n";
        }

        else if ((b[0] == 0) && (b[n - 1] == 0) && count(a.begin(), a.end(), 0ll) == 2)
        {
            cout << "1\n";
        }

        else
            cout << "2\n";
    }

    return 0;
}