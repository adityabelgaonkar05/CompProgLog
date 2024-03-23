#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x; //number of different denominations, change to give
    cin >> n >> x;
    vector<int> denom;
    int notes = 0;

    for(int i = 0; i<n; ++i)
    {
        cin >> denom[i];
    }

    sort(denom.rbegin(), denom.rend());

    for(int i = 0; i<n; ++i)
    {
        notes += x/denom[i];
        x = x%denom[i];
    }

    cout << notes << endl;

    return 0;
}