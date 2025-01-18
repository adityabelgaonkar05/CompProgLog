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
        string s;
        cin >> s;

        int lowest = INT64_MAX;

        for (int i = 0; i < n - 1; ++i)
        {
            string temp = "0";
            temp.push_back(s[i]);
            temp.push_back(s[i + 1]);
            int curr = stoi(temp);
            // cerr << curr << '\n';

            for (int j = 0; j < n; ++j)
            {
                if (j == i)
                {
                    ++j;
                    continue;
                }

                string toadd = "0";
                toadd.push_back(s[j]);
                int mult = curr * stoi(toadd);
                int add = curr + stoi(toadd);

                curr = min(mult, add);
            }

            lowest = min(lowest, curr);
        }

        cout << lowest << '\n';
    }

    return 0;
}