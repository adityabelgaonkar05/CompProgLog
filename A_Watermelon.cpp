#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  if ((n & 1) || n == 2)
    cout << "NO\n";
  else
    cout << "YES\n";

  return 0;
}
