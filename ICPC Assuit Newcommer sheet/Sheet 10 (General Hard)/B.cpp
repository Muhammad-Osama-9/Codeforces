/**
 * @author : Muhammad Osama Elarby
 * @date :

*/

/* section : Includes */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long
#pragma GCC target("bmi,bmi2,lzcnt,popcnt") // bit manipulation
/* section : Macros */

#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define MASK (~(1 << 31))

/* section : fucntion Implentaion  */

inline void Muhammad(void)
{
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

    cin.tie(0);
    std::cout.tie(0);
    ios_base::sync_with_stdio(0);
}

/* section : Main */

int main()
{
    Muhammad();
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int res = s1.size() + s2.size();

    for (int i = 0; i < min(s1.size(), s2.size()); i++)
    {
        if (s1[i] == s2[i])
        {
            res -= 2;
        }
        else
        {
            break;
        }
    }
    cout << res;

    return 0;
}