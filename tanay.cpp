#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    int n;
    cin >> n;

    vector<int> ls;
    for(int i = 0; i < a.size(); i++){
        ls.push_back((((int)a[i]) - 96));
        
    }
    sort(ls.begin(),ls.end());
    int temp = (*max_element(ls.begin(),ls.end())*n);
    //int temp1 = accumulate(ls.begin(),ls.end(),-temp);
    for(int i = 0; i < ls.size() -1; i++){
        temp += ls[i];
    }
    cout << temp << endl;

}