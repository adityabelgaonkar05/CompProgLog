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

    int ans = a[0];
    int curr = a[0];

    for (int i = 0; i < n - 1; ++i)
    {
      if (((a[i] & 1) && !(a[i + 1] & 1)) || (!(a[i] & 1) && (a[i + 1] & 1)))
      {
        curr += a[i + 1];
        curr = max(curr, a[i + 1]);
        ans = max(ans, curr);
      }

      else
      {
        curr = a[i + 1];
        ans = max(ans, curr);
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
