#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int reverseint(int m)
{
    int ans = 0;

    while (m)
    {
        ans *= 10;
        ans += m % 10;
        m /= 10;
    }

    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;

    vector<int> seq({x, y});
    for (int i = 2; i < 10; ++i)
    {
        seq.push_back(reverseint(seq[i - 1] + seq[i - 2]));
    }

    cout << seq.back();

    return 0;
}