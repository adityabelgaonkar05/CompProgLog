#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

string converttochar(int n)
{
    string ans = "";
    while (n)
    {
        ans.push_back((char)((int)('a') + (n % 10)));
        n /= 10;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int convertback(string s)
{
    int po = 1;
    int ans = 0;
    while (s.size())
    {

        ans += po * (int)(s.back() - 'a');
        po *= 10;
        s.pop_back();
    }

    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string sequence;
    cin >> sequence;

    if (sequence == "first")
    {
        int n;
        cin >> n;
        string ans = "";

        while (n--)
        {
            int el;
            cin >> el;
            ans += converttochar(el);
            ans.push_back('z');
        }

        cout << ans;
    }

    else
    {
        string s;
        cin >> s;
        vector<int> ans;
        string temp = "";

        for (auto i : s)
        {
            if (i == 'z')
            {
                ans.push_back(convertback(temp));
                temp = "";
            }
            else
            {
                temp.push_back(i);
            }
        }

        cout << ans.size() << '\n';
        for (auto i : ans)
        {
            cout << i << ' ';
        }
    }

    return 0;
}