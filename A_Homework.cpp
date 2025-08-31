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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int m;
        cin >> m;
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;

        for (int i = 0; i < m; ++i)
        {
            if (s2[i] == 'D')
            {
                s.push_back(s1[i]);
            }
            else
            {
                s = s1[i] + s;
            }
        }

        cout << s << '\n';
    }

    return 0;
}