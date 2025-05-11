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
        string s1, s2;
        cin >> s1 >> s2;

        vector<string> r1, l1, r2, l2;
        string curr = "";

        vector<char> order;
        vector<char> order2;
        curr.push_back(s1[0]);
        order.push_back(s1[0]);
        order2.push_back(s2[0]);

        for (int i = 1; i < s1.size(); ++i)
        {
            if (curr.back() != s1[i])
            {
                if (s1[i] == 'R')
                    l1.push_back(curr);
                else
                    r1.push_back(curr);
                curr = "";
            }

            curr.push_back(s1[i]);
            if (order.back() != s1[i])
                order.push_back(s1[i]);
        }

        if (curr.size())
        {

            if (curr.back() == 'R')
                r1.push_back(curr);
            else
                l1.push_back(curr);
        }

        curr = "";
        curr.push_back(s2[0]);

        for (int i = 1; i < s2.size(); ++i)
        {
            if (curr.back() != s2[i])
            {
                if (s2[i] == 'R')
                    l2.push_back(curr);
                else
                    r2.push_back(curr);
                curr = "";
            }
            curr.push_back(s2[i]);
            if (order2.back() != s2[i])
                order2.push_back(s2[i]);
        }

        if (curr.size())
        {

            if (curr.back() == 'R')
                r2.push_back(curr);
            else
                l2.push_back(curr);
        }

        // validation below this

        if (l1.size() != l2.size() || r1.size() != r2.size())
        {
            cout << "NO\n";
        }

        else if (order != order2)
        {
            cout << "NO\n";
        }

        else
        {
            bool cond = 1;

            for (int i = 0; i < l1.size(); ++i)
            {
                if (l1[i].size() * 2 < l2[i].size())
                {
                    cond = 0;
                    break;
                }
                else if (l1[i].size() > l2[i].size())
                {
                    cond = 0;
                    break;
                }
            }

            for (int i = 0; i < r1.size(); ++i)
            {
                if (r1[i].size() * 2 < r2[i].size())
                {
                    cond = 0;
                    break;
                }
                else if (r1[i].size() > r2[i].size())
                {
                    cond = 0;
                    break;
                }
            }

            if (cond)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}