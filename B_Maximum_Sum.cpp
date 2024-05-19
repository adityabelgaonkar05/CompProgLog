#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

const int pow109 = 1e9 + 7; 

//TRY AGAIN LATER BUT IMPROVED

//Kadanes template
int maxSubArraySum(vector<int> a, int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here = (max_ending_here + a[i])%pow109;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        
        max_so_far%=pow109;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int summation(vector<int> a)
{
    int sum = 0;
    for(int i = 0; i < a.size(); ++i)
    {
        sum += a[i];
        if (sum < 0)
            sum += pow109;

        sum%=pow109;
    }

    if (sum < 0)
        sum += pow109;

    return sum%pow109;
}

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        vector<int> b(a.begin(), a.end());

        for(int i = 1; i < n; ++i)
        {
            b[i] += b[i-1];
        }

        int largest = maxSubArraySum(a, a.size() + 0ll);

        k--;
        b.push_back(max(0ll, b[n-1] + largest));
        a.push_back(max(0ll, largest));

        if(k)
        {
            while(k--) 
            {
                b.push_back(max(0ll, (b[b.size()-1])%pow109));
                a.push_back(max(0ll, b[b.size()-1]));
            }

            // for(auto i : a) cout << i << " ";
            // cout << endl; //here

            cout << accumulate(a.begin(), a.end(), 0) << "\n";
        }

        else 
        {
            // for(auto i : a) cout  << i << " ";  //debug
            cout << accumulate(a.begin(), a.end(), 0) << "\n";
        }
    }

    return 0;
}