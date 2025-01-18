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
        string s1, s2;
        cin >> s1 >> s2;

        int ans = s1.size();

        int maxmat = 0;

        for (int i = 0; i < s2.size(); ++i)
        {
            int currmat = 0;
            int ind = i;

            for (char x : s1)
            {
                if (ind == s2.size())
                    break;
                if (x == s2[ind])
                {
                    ind++;
                    currmat++;
                    maxmat = max(maxmat, currmat);
                }
            }
        }

        cout << s1.size() + s2.size() - maxmat << '\n';
    }

    return 0;
}