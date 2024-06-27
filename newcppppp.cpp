#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        string s; cin >> s;
        set<int> a;
        for(int i = 0; i < m; ++i)
        {
            int el; cin >> el;
            a.insert(el);
        }

        string news; cin >> news;
        sort(news.begin(), news.end());
        vector<int> ap; for(auto i : a) ap.push_back(i - 1);
        // reverse(ap.begin(), ap.end());
        // reverse(ast.begin(), ast.end());

        // for(auto i : ap) cout << i << ' ';
        // for(auto i : news) cout << i << ' ';

        for(int i = 0; i < ap.size(); ++i)
        {
            s[ap[i]] = news[i];
        }

        cout << s << '\n';
    }

    return 0;
}