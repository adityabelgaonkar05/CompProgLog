#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

void isitposs(int count2, int count3, int sum, bool &ans, set<int> &visitedremainders)
{
    if (ans)
        return;

    if (!(sum % 9))
    {
        ans = 1;
        return;
    }

    if (visitedremainders.find(sum % 9) != visitedremainders.end())
    {
        return;
    }

    else
        visitedremainders.insert(sum % 9);

    if (count2)
    {
        isitposs(count2 - 1, count3, sum + 2, ans, visitedremainders);
    }

    if (count3)
    {
        isitposs(count2, count3 - 1, sum + 6, ans, visitedremainders);
    }

    if (!count3 && !count2)
        return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum = 0;
        int count2 = 0, count3 = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            string temp = " ";
            temp += s[i];

            sum += stoi(temp);
            if (s[i] == '2')
                count2++;
            else if (s[i] == '3')
                count3++;
        }

        if (!(sum % 9))
        {
            cout << "YES\n";
        }

        else
        {
            bool ans = 0;
            set<int> visitedremainders;
            isitposs(count2, count3, sum, ans, visitedremainders);

            if (ans)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}