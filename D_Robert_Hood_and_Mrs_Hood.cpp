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
    int n, d, k;
    cin >> n >> d >> k;

    vector<pair<int, int>> jobs(k);

    for (auto &i : jobs)
    {
      cin >> i.first >> i.second;
    }

    vector<pair<int, int>> diffactivejobs(n + 2, pair<int, int>(0, 0));
    for (auto i : jobs)
    {
      diffactivejobs[i.first].first++;
      diffactivejobs[i.second].second--;
    }

    int currdistinct = 0;
    vector<int> days;

    for (int i = 1; i <= d; ++i)
    {
      currdistinct += diffactivejobs[i].first;
    }

    days.push_back(currdistinct);

    for (int i = 2; i <= n - d + 1; ++i)
    {
      currdistinct += diffactivejobs[i + d - 1].first;
      currdistinct += diffactivejobs[i - 1].second;
      days.push_back(currdistinct);
    }

    // for (auto i : days)
    //   cout << i << ' ';
    // cout << '\n';

    int brother = max_element(days.begin(), days.end()) - days.begin();
    int mother = min_element(days.begin(), days.end()) - days.begin();

    cout << brother + 1 << ' ' << mother + 1 << '\n';
  }

  return 0;
}