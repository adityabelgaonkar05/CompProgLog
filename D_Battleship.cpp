#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> grid(11, vector<int>(11, 0));

    int g;
    cin >> g;
    while (g--)
    {
        int d, l, r, c;
        cin >> d >> l >> r >> c;

        if (d)
        {
            for (int i = r; i < r + l; ++i)
            {
                if ((i > 10) || grid[i][c] == 1)
                {
                    cout << "N";
                    return 0;
                }
                else
                    grid[i][c] = 1;
            }
        }
        else
        {
            for (int i = c; i < c + l; ++i)
            {
                if ((i > 10) || grid[r][i] == 1)
                {
                    cout << "N";
                    return 0;
                }
                else
                    grid[r][i] = 1;
            }
        }
    }

    cout << "Y";

    return 0;
}