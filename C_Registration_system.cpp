#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  map<string, int> mp;
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    if (mp[s])
    {
      cout << s << mp[s] << '\n';
      mp[s]++;
    }
    else
    {
      cout << "OK\n";
      mp[s]++;
    }
  }

  return 0;
}
