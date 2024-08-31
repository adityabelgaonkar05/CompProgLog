#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

struct pnt
{
  int x;
  int y;
};

int distance(pnt c, pnt end)
{
  int dist = 1ll * (c.x - end.x) * (c.x - end.x) + 1ll * (c.y - end.y) * (c.y - end.y);
  return dist;
}

int32_t
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<pnt> a(n);
    for (auto &i : a)
      cin >> i.x >> i.y;

    pnt start, end;
    cin >> start.x >> start.y >> end.x >> end.y;
    int start_end_dist = distance(start, end);

    bool cond = 0;

    for (auto i : a)
    {
      if (distance(i, end) <= start_end_dist)
      {
        cond = 1;
        break;
      }
    }

    if (cond)
      cout << "NO\n";
    else
      cout << "YES\n";
  }

  return 0;
}
