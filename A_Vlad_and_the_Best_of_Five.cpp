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
    int a = 0, b = 0;

    for (auto i : s)
    {
      if (i == 'A')
        a++;
      else
        b++;
    }

    if (a > b)
      cout << "A\n";
    else
      cout << "B\n";
  }

  return 0;
}
