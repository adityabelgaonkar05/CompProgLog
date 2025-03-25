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

        int len = s.size();

        for (int i = s.size() - 1; i > 0; --i)
        {
            if (s[i] == s[i - 1])
            {
                len = 1;
                break;
            }
        }

        cout << len << '\n';
    }

    return 0;
}