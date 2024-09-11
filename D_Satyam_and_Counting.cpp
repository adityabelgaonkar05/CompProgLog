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
    map<pair<int, int>, int> mp;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; ++i)
    {
      pair<int, int> temp;
      cin >> temp.first >> temp.second;
      a.push_back(temp);
      mp[temp]++;
    }

    sort(a.begin(), a.end());

    int count = 0;
    int count2 = 0;

    for (int i = 0; i < n - 1; ++i)
    {
      if (a[i].first == a[i + 1].first)
      {
        count++;
      }
    }

    for (auto i : a)
    {
      pair<int, int> tem = {i.first + 1, 1};
      pair<int, int> tem2 = {i.first + 2, 0};
      pair<int, int> tem3 = {i.first + 1, 0}, tem4 = {i.first + 2, 1};

      if ((i.second == 0) && (mp[tem] && mp[tem2]))
        count2++;
      else if ((i.second == 1) && mp[tem3] && mp[tem4])
        count2++;
    }

    cout << count * (n - 2) + count2 << '\n';
  }

  return 0;
}
