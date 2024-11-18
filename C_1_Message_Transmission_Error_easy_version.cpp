#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

bool reverse_check(string s1, string s2)
{
  int n = s1.size() - 1;
  int m = s2.size() - 1;

  if (s1.back() != s1[n - m - 1])
    return 0;

  bool ans = 1;

  while (m >= 0)
  {
    if (s1[n] == s2[m])
    {
      n--;
      m--;
    }

    else
    {
      ans = 0;
      break;
    }
  }

  return ans;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  bool cond = 0;
  int n = s.size() / 2 + (s.size() & 1);
  for (int i = n; i < s.size(); ++i)
  {
    string s1 = s.substr(0, i);
    string s2 = s.substr(i, s.size());
    if (reverse_check(s1, s2))
    {
      cond = 1;
      cout << "YES\n"
           << s1 << '\n';
      break;
    }
  }

  if (!(cond))
    cout << "NO\n";

  return 0;
}
