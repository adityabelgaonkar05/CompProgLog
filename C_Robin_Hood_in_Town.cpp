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

    if (n < 3)
    {
      cout << "-1\n";
      continue;
    }

    sort(a.begin(), a.end());
    int uptill = n / 2;

    int sum = accumulate(a.begin(), a.end(), 0ll);
    int ans = (long long)ceil((double)a[uptill] - (((double)sum) / (double)n)) * 2 * n;
    if (((double)sum / (double)n) == (double)a[uptill])
      ans = (sum + 1);

    else if (ans < 0)
      ans = 0;

    cout << ans << ' ' << a[uptill] << '\n';
  }

  return 0;
}
