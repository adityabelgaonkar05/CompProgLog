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
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; ++i)
    {
      int j = i;
      while (j > 0)
      {
        if (s[j] > s[j - 1] + 1)
        {
          swap(s[j], s[j - 1]);
          s[j - 1]--;
        }

        else
          break;

        j--;
      }
    }

    cout << s << '\n';
  }

  return 0;
}