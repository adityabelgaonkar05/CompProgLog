#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(
        false); // this is wrong but i at least wanna submit once
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int summ = 0;

        for (int i = 0; i < n; ++i)
        {
            if (i & 1)
                summ -= a[i];
            else
                summ += a[i];
        }

        cout << summ << '\n';
    }

    return 0;
}

// #include <bits/stdc++.h>
// #define ab adityabelgaonkar
// #define int long long
// using namespace std;

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> a(n);
//         for (auto &i : a)
//             cin >> i;

//         int summ = 0;

//         int nn = n;

//         for (auto &i : a)
//         {
//             i += (nn--);
//         }

//         int smallestpos = INT_MAX, smallestposind = -1;
//         int largestneg = INT_MIN, largestnegind = -1;

//         int smallestneg = INT_MAX, smallestnegind = -1;
//         int largestpos = INT_MIN, largestposind = -1;

//         for (int i = 0; i < n; ++i)
//         {
//             if (i & 1)
//             {
//                 summ -= a[i];
//                 if (a[i] > largestneg)
//                 {
//                     largestneg = a[i];
//                     largestnegind = i;
//                 }
//                 if (a[i] < smallestneg)
//                 {
//                     smallestneg = a[i];
//                     smallestnegind = i;
//                 }
//             }
//             else
//             {
//                 summ += a[i];
//                 if (a[i] > largestpos)
//                 {
//                     largestpos = a[i];
//                     largestposind = i;
//                 }
//                 if (a[i] < smallestpos)
//                 {
//                     smallestpos = a[i];
//                     smallestposind = i;
//                 }
//             }
//         }

//         // int alicegain =
//         //     (largestneg - smallestpos) + abs(largestnegind -
//         smallestposind);
//         // int bobgain =
//         //     (largestpos - smallestneg) - abs(largestposind -
//         smallestnegind);

//         // if (alicegain > bobgain && alicegain > 0)
//         // {
//         //     summ += alicegain;
//         // }

//         cout << summ << '\n';
//     }

//     return 0;
// }