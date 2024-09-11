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
    int x, y, k;
    cin >> x >> y >> k;
    int ans = 0;

    if (x <= y)
    {
      ans += (ceil((double)x / k) * 2);
      y -= ceil((double)x / k) * k;
      if (y > 0)
      {
        ans += (ceil((double)y / k) * 2);
      }
    }

    else
    {
      ans += (ceil((double)y / k) * 2);
      x -= ceil((double)y / k) * k;
      if (x > 0)
      {
        ans += (ceil((double)x / k) * 2) - 1;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
