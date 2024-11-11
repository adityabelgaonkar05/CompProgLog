#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, m, x1, y1, x2, y2;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;

    if (x1 != x2)
        cout << x1 << ' ' << 0 << ' ' << x2 << ' ' << m;

    else
        cout << 0 << ' ' << y1 << ' ' << n << ' ' << y2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ifstream in("anniversary.in");
    ofstream out("anniversary.out");
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