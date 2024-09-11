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
    vector<string> a;
    for (int i = 0; i < n; ++i)
    {
      string s;
      cin >> s;
      a.push_back(s);
    }

    for (int j = n - 1; j >= 0; --j)
    {
      for (int i = 0; i < 4; ++i)
      {
        if (a[j][i] == '#')
          cout << i + 1 << ' ';
      }
    }

    cout << '\n';
  }

  return 0;
}
