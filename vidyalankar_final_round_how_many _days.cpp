#include<bits/stdc++.h>
using namespace std;

//Credits to Raj Agrawal 🫡

void construct(string s , vector<string> & v)
{
    v[0].push_back(s[0]);
    v[0].push_back(s[1]);

    v[1].push_back(s[3]);
    v[1].push_back(s[4]);


    v[2].push_back(s[6]);
    v[2].push_back(s[7]);
    v[2].push_back(s[8]);
    v[2].push_back(s[9]);
}


void swap_all(vector<string> &v1 , vector<string> &v2)
{
    for(int i = 0 ; i < 3 ; i++)
    {
        swap(v1[i] , v2[i]);
    }
}

void testcase()
{
    string s1 , s2; cin >> s1 >> s2;

    vector<string> v1(3) , v2(3);



   

    construct(s1 , v1);
    construct(s2 , v2);
    vector<int> months = {0 , 31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};


    if(v1 == v2)
    {
        cout << 0 << endl;
        return;
    }
    if(stoi(v1[2]) == stoi(v2[2]))
    {
        if(stoi(v1[1]) == stoi(v2[1]))
        {
            cout << abs(stoi(v1[0]) - stoi(v2[0]));
            return;
        }


        else if(stoi(v1[1]) > stoi(v2[1]))
        {
            // cout << stoi(v1[1]) << " " << stoi(v2[1]);
            swap_all(v1 , v2);
        }

        int answer = 0;
        for(int i = stoi(v1[1]) + 1 ; i < stoi(v2[1]) ; i++)
        {
            int year = stoi(v2[2]);
            if(i == 2 and ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0))) answer += 29;
            else if(i == 2 and ((year % 4 != 0 and year % 100 == 0) or (year % 400 != 0))) answer += 28;


            if(i != 2) answer += months[i];

        }

        if(stoi(v1[1]) == 2)
        {
            int year = stoi(v1[2]);

            if(((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0))) answer += 29 - stoi(v1[0]);
            else answer += 28 - stoi(v1[0]);
            // cout << answer << " ";

        }
        else
        {
            answer += months[stoi(v1[1])] - stoi(v1[0]);

        }

        if(stoi(v2[1]) == 2)
        {
            int year = stoi(v2[2]);
             if(((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0))) answer += stoi(v2[0]);
            else answer += stoi(v2[0]);

        }


        else
        {
            answer += stoi(v2[0]);
        }

        cout << answer << endl;
        return;

    }

    int answer = 0;

    for(int i = stoi(v1[2]) + 1 ; i < stoi(v2[2]) ; i++)
    {
        if((i % 400 == 0) or (i % 4 == 0 and i % 100 != 0)) answer += 366;
        else answer += 365;
    }


    int year1 = 0 , year2 = 0;
    for(int i = 1 ; i < stoi(v2[1]) ; i++)
    {
        int year = stoi(v2[2]);
        if(i == 2 and ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0))) answer += 29;
        else if(i == 2 and ((year % 4 != 0 and year % 100 == 0) or (year % 400 != 0))) answer += 28;


        if(i != 2) answer += months[i];

       
    }

    answer += stoi(v2[0]);

    int year = stoi(v1[2]);
    if(((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0))) year1 = 366;
    else year1 = 365;
   
    for(int i = 1 ; i < stoi(v1[1]) ; i++)
    {
        int year = stoi(v1[2]);
        if(i == 2 and ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0))) year1 -= 29;
        else if(i == 2 and ((year % 4 != 0 and year % 100 == 0) or (year % 400 != 0))) year1 -= 28;


        if(i != 2) year1 -= months[i];

       
    }
   
    year1 -= stoi(v1[0]);


    answer += year1;

    if(stoi(v1[2]) == stoi(v2[2]) and stoi(v1[2]) > 2)
    {
        cout << abs(365 - answer) << endl;
        return;
    }
    cout << answer << endl;

}


int main()
{

    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
        #endif

    int tc = 1;
    //cin >> tc;
    while(tc--) testcase();

    return 0;
}