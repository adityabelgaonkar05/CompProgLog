#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

pair<int, int> binsearch(vector<pair<int, int>> &vec, int q)
{
    int low = 0;
    int high = vec.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (vec[mid].first > q)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return (vec[high]);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    while (t--)
    {
        // Write your code here
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        vector<pair<int, int>> pairs;
        int c = 1;
        int mex = 0;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] > mex)
            {
                pairs.push_back(make_pair(c, mex));
                c += vec[i] - mex;
                mex = vec[i] + 1;
            }
            else
            {
                mex++;
            }
        }
        pairs.push_back(make_pair(c, mex));

        // for (int i =0;i<pairs.size();i++) {
        //     cout << pairs[i].first << ' ' << pairs[i].second << '\n';
        // }
        for (int i = 0; i < k; i++)
        {
            int q;
            cin >> q;
            auto x = binsearch(pairs, q);
            cout << x.second + q - x.first << ' ';
        }
        cout << '\n';
    }
    return 0;
}