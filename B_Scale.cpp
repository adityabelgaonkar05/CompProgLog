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
    int n, k;
    cin >> n >> k;
    vector<string> a;

    for (int i = 0; i < n; ++i)
    {
      string s;
      cin >> s;
      a.push_back(s);
    }

    for (int i = 0; i < n; i += k)
    {
      for (int j = 0; j < n; j += k)
      {
        cout << a[i][j];
      }

      cout << '\n';
    }
  }

  return 0;
}
