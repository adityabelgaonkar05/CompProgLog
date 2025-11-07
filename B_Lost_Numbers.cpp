#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int aintob;
    cout << "? 1 2" << endl;
    cin >> aintob;
    int aintoc;
    cout << "? 1 3" << endl;
    cin >> aintoc;
    int dintoe;
    cout << "? 4 5" << endl;
    cin >> dintoe;
    int dintof;
    cout << "? 4 6" << endl;
    cin >> dintof;

    set<int> s({42, 23, 16, 15, 8, 4});

    vector<int> a(6);

    for (auto it : s)
    {
        set<int> temp = s;
        int tp = aintob;

        if (aintob % it == 0)
        {
            temp.erase(it);
            tp /= it;

            bool poss = 0;

            for (int i : temp)
            {
                if (tp % i == 0 && tp / i == 1)
                {
                    poss = 1;
                    a[0] = it;
                    a[1] = i;
                }
            }

            if (poss)
                break;
        }
    }

    s.erase(a[0]);
    s.erase(a[1]);

    if (aintoc % a[0] != 0 || s.find(aintoc / a[0]) == s.end())
    {
        swap(a[0], a[1]);
    }

    a[2] = aintoc / a[0];

    s.erase(a[2]);

    for (auto it : s)
    {
        set<int> temp = s;
        int tp = dintoe;
        if (dintoe % it == 0)
        {
            temp.erase(it);
            tp /= it;

            bool poss = 0;

            for (int i : temp)
            {
                if (tp % i == 0 && tp / i == 1)
                {
                    poss = 1;
                    a[3] = it;
                    a[4] = i;
                }
            }

            if (poss)
                break;
        }
    }

    s.erase(a[3]);
    s.erase(a[4]);

    if (dintof % a[3] != 0 || s.find(dintof / a[3]) == s.end())
    {
        swap(a[3], a[4]);
    }

    a[5] = *s.begin();

    cout << "! ";
    for (auto i : a)
        cout << i << ' ';
    cout << endl;

    return 0;
}