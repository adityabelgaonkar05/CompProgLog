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
    int n;
    cin >> n;
    bool odd = 0, even = 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
      if (a[i] & 1)
        odd = 1;
      else
        even = 1;
    }

    if (odd && even)
      cout << "-1\n";
    else
    {
      int tohappen = 31;

      if (odd)
      {
        tohappen = 30;
        for (int i = 0; i < n; ++i)
          a[i] = abs(a[i] - 1);
      }

      int gcdcd = a[0];

      for (int i = 1; i < n; ++i)
      {
        gcdcd = __gcd(gcdcd, a[i]);
      }

      set<int> nums;

      if (gcdcd == 0)
      {
        cout << "0\n\n";
        continue;
      }

      cout << tohappen << '\n';
      for (int i = 29; i >= 0; --i)
      {
        cout << (1 << i) << ' ';
      }

      if (tohappen == 31)
        cout << 1;
      cout << '\n';
    }
  }

  return 0;
}
