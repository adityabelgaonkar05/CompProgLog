#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();

        int jj = 0;
        bool cond = 1;

        for (int i = 1; i < n - 1; ++i)
        {
            if (s[i] == '(')
                jj++;
            else if (jj == 0)
            {
                cond = 0;
                break;
            }
            else
                jj--;
        }

        if (!cond)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}