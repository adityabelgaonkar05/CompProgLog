#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;

        vector<pair<int, int>> visited;
        vector<pair<int, int>> pos1(8);
        vector<pair<int, int>> pos2(8);
        pos1[0].first = xk - a;
        pos1[1].first = xk + a;
        pos1[2].first = xk - a;
        pos1[3].first = xk + a;
        pos1[0].second = yk - b;
        pos1[1].second = yk - b;
        pos1[2].second = yk + b;
        pos1[3].second = yk + b;

        pos1[4].first = xk - b;
        pos1[5].first = xk + b;
        pos1[6].first = xk - b;
        pos1[7].first = xk + b;
        pos1[4].second = yk - a;
        pos1[5].second = yk - a;
        pos1[6].second = yk + a;
        pos1[7].second = yk + a;

        pos2[0].first = xq - a;
        pos2[1].first = xq + a;
        pos2[2].first = xq - a;
        pos2[3].first = xq + a;
        pos2[0].second = yq - b;
        pos2[1].second = yq - b;
        pos2[2].second = yq + b;
        pos2[3].second = yq + b;

        pos2[4].first = xq - b;
        pos2[5].first = xq + b;
        pos2[6].first = xq - b;
        pos2[7].first = xq + b;
        pos2[4].second = yq - a;
        pos2[5].second = yq - a;
        pos2[6].second = yq + a;
        pos2[7].second = yq + a;

        int count = 0;

        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (pos1[i] == pos2[j] && find(visited.begin(), visited.end(), pos2[j]) == visited.end())
                    {
                        count++;
                        visited.push_back(pos2[j]);
                    }
            }
        }

        cout << count << "\n";
    }

    return 0;
}
