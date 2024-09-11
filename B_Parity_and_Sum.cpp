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
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
      cin >> i;

    int maxodd = -1;

    vector<int> even;
    for (int i : a)
      if (!(i & 1))
        even.push_back(i);

      else
        maxodd = max(i, maxodd);

    sort(even.begin(), even.end());

    if (maxodd == -1 || even.size() == 0)
      cout << 0 << '\n';

    else
    {
      for (int i = 0; i < even.size(); ++i)
      {
        ans++;
        if (even[i] < maxodd)
        {
          maxodd += even[i];
        }

        else
        {
          ans += (even.size() - i);
          break;
        }
      }

      cout << ans << '\n';
    }
  }

  return 0;
}
