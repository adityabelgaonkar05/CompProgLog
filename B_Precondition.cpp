#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    set<char> ss(t.begin(), t.end());

    for (int i = 1; i < s.size(); ++i)
    {
        if (isupper(s[i]))
        {
            if (!ss.count(s[i - 1]))
            {
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";

    return 0;
}