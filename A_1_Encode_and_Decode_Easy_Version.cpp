#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string sequence;
    cin >> sequence;

    if (sequence == "first")
    {
        int n;
        cin >> n;
        string encoded = "";
        for (int i = 0; i < n; ++i)
        {
            int el;
            cin >> el;
            encoded.push_back('a' - 1 + el);
        }

        cout << encoded;
    }

    else
    {
        string s;
        cin >> s;
        cout << s.size() << '\n';
        for (auto i : s)
        {
            cout << (int)(i - 96) << ' ';
        }
    }

    return 0;
}