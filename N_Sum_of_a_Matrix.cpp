#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

void rec(vector<vector<int>> &a, vector<vector<int>> &b, int curri, int currj, int i, int j)
{
    if(curri == i)
    {
        return;
    }

    if(currj == j)
    {
        cout << "\n";
        rec(a, b, curri+1, 0, i, j);
        return;
    }

    cout << (a[curri][currj] + b[curri][currj]) << " ";
    rec(a, b, curri, currj+1, i, j);
}

int32_t main()
{
    int r, c; cin >> r >> c;
    vector<vector<int>> a, b;
    vector<int> temp(c);

    for(int i = 0; i < r; ++i)
    {
        for(auto &j : temp) cin >> j;
        a.push_back(temp);
    }

    for(int i = 0; i < r; ++i)
    {

        for(auto &j : temp) cin >> j;
        b.push_back(temp);
    }

    rec(a, b, 0, 0, r, c);

    return 0;
}