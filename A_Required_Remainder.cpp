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
    int x, y, n;
    cin >> x >> y >> n;
    int ans = n / x * x + y;
    if (ans > n)
      ans = (n / x - 1) * x + y;
    cout << ans << '\n';
  }

  return 0;
}
