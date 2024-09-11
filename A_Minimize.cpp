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
    int a, b;
    cin >> a >> b;
    int ans = INT_MAX;

    for (int i = a; i <= b; ++i)
    {
      ans = min(ans, (i - a) + (b - i));
    }

    cout << ans << '\n';
  }

  return 0;
}
