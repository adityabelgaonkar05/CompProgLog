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
    vector<int> a(n);
    for (auto &i : a)
      cin >> i;

    if (n <= 2)
    {
      cout << -1 << '\n';
      continue;
    } // remember to use 1e18 not 1e9 in questions what is actually wrong with you

    sort(a.begin(), a.end());

    int sumfullarr = accumulate(a.begin(), a.end(), 0ll);

    int l = 0, r = (int)1e18 + 10; // i am actually fucking stupid
    int ans = r;

    while (l < r)
    {
      int mid = l + (r - l) / 2;
      if (((mid + sumfullarr) / n) > (2 * a[n / 2]))
      {
        ans = min(ans, mid);
        r = mid;
      }

      else if ((((mid + sumfullarr) / n) == (2 * a[n / 2])) && ((mid + sumfullarr) % n))
      {
        ans = min(ans, mid);
        r = mid;
      }

      else
        l = mid + 1;
    }

    cout << ans << '\n';

    // ans = maxel
  }

  return 0;
}