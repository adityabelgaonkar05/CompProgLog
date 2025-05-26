#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int nCr(int n, int r)
{

    double sum = 1;
    for (int i = 1; i <= r; i++)
    {

        sum = sum * (n - r + i) / i;
    }
    return (int)sum;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // I know i have solved this wrong just checking

    string s1, s2;
    cin >> s1 >> s2;

    map<char, int> mp1, mp2;

    for (auto i : s1)
        mp1[i]++;
    for (auto i : s2)
        mp2[i]++;

    double prob = 1;

    if (mp1['+'] == mp2['+'] && mp1['-'] == mp2['-'])
    {
        cout << fixed
             << setprecision(
                    numeric_limits<double>::max_digits10)
             << prob << '\n';
    }

    else if (mp1['+'] < mp2['+'] || mp1['-'] < mp2['-'])
    {
        prob = 0;
        cout << fixed
             << setprecision(
                    numeric_limits<double>::max_digits10)
             << prob << '\n';
    }

    else
    {
        int neededplus = mp1['+'] - mp2['+'];
        int neededminus = mp1['-'] - mp2['-'];
        prob = pow(2, -1 * mp2['?']) * nCr(mp2['?'], neededminus);
        cout << fixed
             << setprecision(
                    numeric_limits<double>::max_digits10)
             << prob << '\n';
    }

    return 0;
}