#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int tt=0;
    cin>>tt;
    while(tt--){
        int n,k;
        int count=0;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        while(k>0){
            k-=v[count];
            if(k>=0)
            count++;
        }
        cout<<count<<"\n";
    }
    
    return 0;
}