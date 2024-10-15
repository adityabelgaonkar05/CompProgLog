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
    vector<int> pos(m);
    cin >> pos[0] >> pos[1];
    vector<int> que(q);
    cin >> que[0];
    int fartherteacher;

    if (abs(que[0] - pos[0]) > abs(que[0] - pos[1]))
    {
      fartherteacher = pos[0];
    }

    else
      fartherteacher = pos[1];

    // cout << fartherteacher << '\n';

    cout << abs(fartherteacher - que[0]) / 2 << '\n';
    //  << '\n';
  }

  return 0;
}
