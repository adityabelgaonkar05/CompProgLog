#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t; cin >> t;

    while(t--)
    {
        int n; cin >> n;
        int curr1 = 0, curr2 = 0, curr3 = 0, curr4 = 0;
        int val1 = n, val2 = n, val3 = n, val4 = n;

        curr1 += val1/15;
        val1 = val1%15;

        curr1 += val1/10;
        curr2 += val2/10;
        val1 = val1%10;
        val2 = val2%10;

        curr1 += val1/6;
        curr2 += val2/6;
        curr3 += val3/6;
        val1 = val1%6;
        val2 = val2%6;
        val3 = val3%6;

        curr1 += val1/3;
        curr2 += val2/3;
        curr3 += val3/3;
        curr4 += val4/3;
        val1 = val1%3;
        val2 = val2%3;
        val3 = val3%3;
        val4 = val4%3;

        curr1 += val1;
        curr2 += val2;
        curr3 += val3;
        curr4 += val4;
        val1 = val1;
        val2 = val2;
        val3 = val3;
        val4 = val4;

        if(n == 98) cout << endl << curr1 << " " << curr2 << " " << curr3 << " " << curr4 << " " << endl;

        int arr[4] = {curr1, curr2, curr3, curr4};

        cout << *min_element(arr, arr+4) << endl;
    }

    return 0;
}