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
        string s;
        cin >> s;
        int ans = stoi(s);
        bool flag = 1;

        for (int i = 0; i < 100 && flag; ++i)
        {
            for (int j = 0; j < 100 && flag; ++j)
            {
                if (ans == (i + j) * (i + j))
                {
                    // if (i < 10)
                    //     cout << '0';
                    cout << i << ' ';
                    // if (j < 10)
                    //     cout << '0';
                    cout << j << ' ';
                    flag = 0;
                }
            }
        }

        if (flag)
            cout << -1;
        cout << '\n';
    }

    return 0;
}