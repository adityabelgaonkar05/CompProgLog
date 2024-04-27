#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

vector<int> hashm;

void possible(vector<int> &a, int curri, int i, int k, int currk)
{
    if(curri == i) {
        hashm.push_back(currk);
        return;
    }
    possible(a, curri+1, i, k, currk + a[curri]);
    if(curri != 0) possible(a, curri+1, i, k, currk - a[curri]);
}

int32_t main()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    possible(a, 0, n, k, 0);
    find(hashm.begin(), hashm.end(), k) != hashm.end() ? cout << "YES" : cout << "NO";
    return 0;
}
