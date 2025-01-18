#include <bits/stdc++.h>
using namespace std;

long long solution(int n, vector<int> arr1, vector<int> arr2)
{
    int l = 0, r = -1;
    int maxl = 0,
        maxr = 0;

    long long maxval = INT64_MIN;
    long long curr1 = 0;
    long long curr2 = 0;

    for (int i = 0; i < n; ++i)
    {
        curr1 += arr1[i];
        curr2 += arr2[i];
        if (curr1 < curr2)
        {
            r = i;
            if (maxval < (curr1 - curr2))
            {
                maxval = (curr1 - curr2);
                maxr = r;
                maxl = l;
            }
        }
        else
        {
            l = i + 1;
        }
    }

    for (int i = maxl; i <= maxr; ++i)
    {
        arr1[i] = arr2[i];
    }

    long long maxs = INT64_MIN;
    long long cur = 0;

    for (auto i : arr1)
        cout << i << ' ';
    for (int i = 0; i < n; ++i)
    {
        cur += arr2[i];
        maxs = max(maxs, cur);
        if (cur < 0)
        {
            cur = 0;
        }
    }

    return maxs;

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> A(n), b(n);
    for (auto &i : A)
        cin >> i;

    for (auto &i : b)
        cin >> i;

    long long result = solution(n, A, b);
    cout << result;

    return 0;
}
