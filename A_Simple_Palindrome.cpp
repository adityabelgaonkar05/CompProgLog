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
    string s = "aeiou";
    if (n <= 5)
    {
      for (int i = 0; i < n; ++i)
      {
        cout << s[(i % 5)];
      }
    }

    else
    {
      for (int i = 0; i < n - 4; ++i)
      {
        cout << 'a';
      }

      cout << "eiou";
    }

    cout << '\n';
  }

  return 0;
}
