#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> s(n);
    for (auto &i : s)
        cin >> i;

        int x;
    cin >> x;

    string c;
    cin >> c;

    if (s[x - 1] == c)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}