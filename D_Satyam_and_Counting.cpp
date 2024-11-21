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
    vector<pair<int, int>> a;
    int countlowerpoints = 0, countupperpoints = 0;
    map<pair<int, int>, int> mp;

    for (int i = 0; i < n; ++i)
    {
      pair<int, int> temp;
      cin >> temp.first >> temp.second;
      a.push_back(temp);
      mp[temp]++;
      if (temp.second == 0)
        countlowerpoints++;
      else
        countupperpoints++;
    }

    sort(a.begin(), a.end());

    int ans = 0;

    for (int i = 0; i < n - 1; ++i)
    {
      if (a[i].first == a[i + 1].first)
      {
        ans += (countlowerpoints - 1) + (countupperpoints - 1);
      }
    }

    for (int i = 0; i < n - 2; ++i)
    {
      if (a[i].second == 0)
      {
        pair<int, int> temp = {a[i].first + 1, 1};
        pair<int, int> temp2 = {a[i].first + 2, 0};
        if (mp[temp] && mp[temp2])
          ans++;
      }

      else
      {
        pair<int, int> temp = {a[i].first + 1, 0};
        pair<int, int> temp2 = {a[i].first + 2, 1};
        if (mp[temp] && mp[temp2])
          ans++;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
