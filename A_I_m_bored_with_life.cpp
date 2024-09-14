#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b;
  cin >> a >> b;

  int c = min(a, b);
  int ans = 1;
  for (int i = 1; i <= c; ++i)
  {
    ans *= i;
  }

  cout << ans;

  return 0;
}
