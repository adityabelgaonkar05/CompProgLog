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
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c)
      cout << "STAIR\n";
    else if (b > a && b > c)
      cout << "PEAK\n";
    else
      cout << "NONE\n";
  }

  return 0;
}
