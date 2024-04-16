#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        string x, s, check = ""; cin >> x >> s;
        bool confirm = 0;

        for(int i = 0; i < 25; ++i)
        {
            check+=x;
        }

        if(check.find(s) != string::npos) confirm = 1;

        if(confirm)
        {
            string news = x;
            int count = 0;

            while(news.size() < s.size())
            {
                news+=news;
                count++;
            }

            // while(news.find(s) != string::npos)
            // {
            //     news+=news;
            //     count++;
            // }

            cout << count << endl;
        }

        else cout << -1 << endl;
    }

    return 0;
}