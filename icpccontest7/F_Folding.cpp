#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int W, H, w, h;
    cin >> W >> H >> w >> h;
    int a = W, b = H;
    W = min(a, b);
    H = max(a, b);

    a = w;
    b = h;

    w = min(a, b);
    h = max(a, b);

    // cout << w << h << W << H << '\n';

    int ans = 0;

    if (W < w || h > H)
        cout << -1 << '\n';

    else
    {
        while (w < W)
        {
            W -= min(W - w, (W + 1) / 2);
            ans++;
        }

        while (h < H)
        {
            H -= min(H - h, (H + 1) / 2);
            ans++;
        }

        cout << ans << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ifstream in("folding.in");
    ofstream out("folding.out");
    cin.rdbuf(in.rdbuf());
    cout.rdbuf(out.rdbuf());

    // ll test = 1;
    // cin >> test;
    // while (test--)
    // {
    solve();
    // }

    return 0;
}