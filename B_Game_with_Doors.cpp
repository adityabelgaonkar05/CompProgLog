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
    int l, r, L, R;
    cin >> l >> r >> L >> R;
    int overlap = min(r, R) - max(l, L);
    if (overlap <= -1)
      overlap = 1;

    else
    {
      if (l != L)
      {
        overlap++;
      }

      if (r != R)
      {
        overlap++;
      }
    }

    cout << overlap << '\n';
  }

  return 0;
}
