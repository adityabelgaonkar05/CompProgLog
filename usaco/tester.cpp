#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

vector<string> funWithAnagrams(vector<string> text)
{
    set<string> rep;
    vector<string> ans;

    for (int i = 0; i < text.size(); ++i)
    {
        string sorts = text[i];
        sort(sorts.begin(), sorts.end());

        if (rep.find(sorts) == rep.end())
        {
            ans.push_back(text[i]);
            rep.insert(sorts);
        }
    }

    sort(ans.begin(), ans.end());

    return ans;
}

int32_t main()
{
    int n;
    cin >> n;
    vector<string> s(n);

    for (auto &i : s)
        cin >> i;

    vector<string> ans = funWithAnagrams(s);

    for (auto i : ans)
        cout << i << ' ';

    return 0;
}
