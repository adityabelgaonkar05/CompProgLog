// #include<bits/stdc++.h>
// #define int long long
// #define ab adityabelgaonkar
// using namespace std;

// int binarysearch(vector<int> arr, int size, int target) {
//     int begin = 0;
//     int end = size - 1;
//     while (begin <= end) {
//         int mid = begin + (end - begin)/2;
//         if (arr[mid] == target) {
//             return mid;
//         }
//         else if (target < arr[mid]) {
//             end = mid - 1;
//         }
//         else {
//             begin = mid + 1;
//         }
//     }
//     return -1;
// }

// int32_t main()
// {


//     return 0;
// }

// #include<bits/stdc++.h>
// #define int long long
// #define ab adityabelgaonkar
// using namespace std;

// int32_t main()
// {


//     return 0;
// }

#include<bits/stdc++.h>
// #define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    map<int, int> mp;
    mp[1]++;
    mp[1]--;
    cout << mp.size();

    return 0;
}