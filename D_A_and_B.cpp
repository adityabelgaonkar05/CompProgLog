#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // simulate all 4 combinations

        vector<int> bpos;
        vector<int> apos;
        int curpos = 0;
        for (auto i : s)
        {
            if (i == 'b')
                bpos.push_back(curpos++);
            else
                apos.push_back(curpos++);
        }

        int ans = 0;

        curpos = 0;
        for (auto i : bpos)
        {
            ans += (i - curpos++);
        }

        int tans = 0;
        curpos = n - 1;
        for (auto i : bpos)
        {
            tans += (curpos-- - i);
        }

        int gans = 0;

        int currfront = 0;
        int currback = n - 1;
        for (int i : bpos)
        {
            if (i < n / 2)
            {
                gans += (i - currfront++);
            }
            else
                break;
        }

        reverse(bpos.begin(), bpos.end());

        for (int i : bpos)
        {
            if (i > n / 2)
            {
                gans += (currback-- - i);
            }
            else if (i == n / 2)
            {
                gans += (min(currback - i, i - currfront));
                break;
            }
            else
                break;
        }

        int hans = 0;
        currback = n - 1;
        currfront = 0;

        for (auto i : apos)
        {
            if (i < n / 2)
            {
                hans += (i - currfront++);
            }
            else
            {
                break;
            }
        }
        reverse(apos.begin(), apos.end());
        for (auto i : apos)
        {
            if (i > n / 2)
            {
                hans += (currback-- - i);
            }
            else if (i == n / 2)
            {
                hans += (min(currback - i, i - currfront));
                break;
            }
            else
                break;
        }

        cout << min(min(min(tans, ans), hans), gans) << '\n';
    }
    return 0;
}