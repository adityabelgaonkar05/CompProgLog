#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

struct pnt {
    double x, y;
};

struct line {
    double a, b, c;
};

struct pnt closest(pnt pt, line gg) { //i hate maths lmao
    double xclo = (gg.b * (gg.b * pt.x - gg.a * pt.y) - gg.a * gg.c) / (gg.a * gg.a + gg.b * gg.b);
    double yclo = (gg.a * (-gg.b * pt.x + gg.a * pt.y) - gg.b * gg.c) / (gg.a * gg.a + gg.b * gg.b);

    pnt ans; ans.x = xclo; ans.y = yclo;
    return ans;
}

int distance(pnt a, pnt b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<pnt> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i].x >> a[i].y;

        pnt start; cin >> start.x >> start.y;
        pnt end; cin >> end.x >> end.y;

        line gg;
        gg.a = end.y - start.y;
        gg.b = start.x - end.x;
        gg.c = end.x * start.y - start.x * end.y;

        vector<pnt> closestpoints;

        for(auto i : a)
        {
            pnt calc = closest(i, gg);
            closestpoints.push_back(calc);
        }

        bool cond = 0;

        for(int i = 0; i < n; ++i)
        {
            if(distance(start, closestpoints[i]) <= distance(a[i], closestpoints[i])) {cond = 1; break;};
        }

        if(cond) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}