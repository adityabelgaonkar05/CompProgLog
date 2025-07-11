#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n, l, r, k;
    cin >> n >> l >> r >> k;

    if (n == 2)
      cout << -1 << '\n';
    else if (n & 1)
      cout << l << '\n';

    else
    {
      int rlargestsetbit = 0, llargestsetbit = 0;

      for (int i = 62; i >= 0; --i)
      {
        if ((1ll << i) & r)
        {
          rlargestsetbit = max(rlargestsetbit, i);
        }

        if ((1ll << i) & l)
        {
          llargestsetbit = max(llargestsetbit, i);
        }
      }

      if (llargestsetbit != rlargestsetbit)
      {
        if (k <= n - 2)
        {
          cout << l << '\n';
        }
        else
          cout << (1ll << (llargestsetbit + 1)) << '\n';
      }
      else
        cout << -1 << '\n';
    }
  }

  return 0;
}