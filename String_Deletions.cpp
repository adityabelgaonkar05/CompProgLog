#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // remove all combinations from the back

        string st = "";

        for (auto c : s)
        {
            st += c;

            while (st.size() >= 3)
            {
                char a = st[st.size() - 3];
                char b = st[st.size() - 2];
                char c = st.back();

                if (a != b && b != c)
                {
                    st.erase(st.begin() + (st.size() - 2));
                }

                else
                {
                    break;
                }
            }
        }

        cout << st.size() << '\n';
    }

    return 0;
}
