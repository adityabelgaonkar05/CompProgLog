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

    string s;
    cin >> s;

    vector<int> ans(n, 0);
    map<int, int> vis;

    for (int j = 0; j < n; ++j)
    {
      int i = j;
      vector<int> vistemp;
      int count = 0;
      if (vis[i])
        continue;
      else
      {
        while (!vis[i])
        {
          vistemp.push_back(i);
          vis[i]++;
          if (s[i] == '0')
            count++;
          i = a[i] - 1;
        }

        for (int x : vistemp)
        {
          ans[x] = count;
        }
      }
    }

    for (int i : ans)
      cout << i << ' ';
    cout << '\n';
  }

  return 0;
}
