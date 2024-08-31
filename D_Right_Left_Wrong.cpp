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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i)
      cin >> a[i];

    string s;
    cin >> s;

    vector<int> ls, rs;

    for (int i = 0; i < n; ++i)
    {
      if (s[i] == 'L')
        ls.push_back(i);
      else
        rs.push_back(i);
    }

    for (int i = 1; i <= n; ++i)
      a[i] += a[i - 1];

    int l = 0;
    int r = rs.size() - 1;

    int ans = 0;

    while (l < ls.size() && r >= 0 && ls[l] < rs[r])
    {
      ans += (a[rs[r--] + 1] - a[ls[l++]]);
    }

    cout << ans << '\n';
  }

  return 0;
}
