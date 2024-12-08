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
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> posteachers(m);
    vector<int> queries(q);

    for (auto &i : posteachers)
      cin >> i;
    for (auto &i : queries)
      cin >> i;

    sort(posteachers.begin(), posteachers.end());

    for (auto x : queries)
    {
      if (x < posteachers[0])
      {
        cout << posteachers[0] - 1 << '\n';
      }

      else if (x > posteachers[m - 1])
      {
        cout << n - posteachers[m - 1] << '\n';
      }

      else if (x == posteachers[0])
        cout << 0 << '\n';

      else
      {
        int ind = upper_bound(posteachers.begin(), posteachers.end(), x) - posteachers.begin();
        cout << (posteachers[ind] - posteachers[ind - 1]) / 2 << '\n';
      }
    }
  }

  return 0;
}