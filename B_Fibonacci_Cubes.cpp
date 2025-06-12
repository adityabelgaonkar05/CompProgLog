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

    vector<int> fib;
    fib.push_back(0), fib.push_back(1);

    vector<vector<int>> calc;
    //              h. w. l
    calc.push_back({1, 1, 1}); // 1
    calc.push_back({2, 2, 3});
    calc.push_back({3, 5, 3});
    calc.push_back({5, 5, 8});
    calc.push_back({8, 8, 13});
    calc.push_back({13, 13, 21});
    calc.push_back({21, 21, 34});
    calc.push_back({34, 34, 55});
    calc.push_back({55, 55, 34 + 55});
    calc.push_back({34 + 55, 34 + 55, 55 + 89});

    for (int i = 2; i <= 13; ++i)
    {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        while (m--)
        {
            vector<int> box(3);
            for (int &x : box)
                cin >> x;

            sort(box.begin(), box.end());
            vector<int> target = calc[n - 1];
            sort(target.begin(), target.end());

            if (box[0] >= target[0] && box[1] >= target[1] && box[2] >= target[2])
                cout << "1";
            else
                cout << "0";
        }

        cout << '\n';
    }

    return 0;
}
