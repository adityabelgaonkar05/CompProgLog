#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // int t;
  // cin >> t;
  // while (t--)
  // {
  string s;
  cin >> s;
  if (s.find("0000000") != string::npos || s.find("1111111") != string::npos)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  // }

  return 0;
}
