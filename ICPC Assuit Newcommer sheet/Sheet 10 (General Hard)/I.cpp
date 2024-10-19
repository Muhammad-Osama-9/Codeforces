/**
 * @author : Muhammad Osama Elarby
 * @date :

*/

/* section : Includes */

#include <bits/stdc++.h>
#include <algorithm>
#include <windows.h>

using namespace std;

#define ll long long
#pragma GCC target("bmi,bmi2,lzcnt,popcnt") // bit manipulation
/* section : Macros */

#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define MASK (~(1 << 31))

/* section : fucntion Implentaion  */
// #define ONLINE_JUDGE

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

const int N = 2e5 + 20;

int main()
{
    Muhammad();
    int n, k;
    cin >> n >> k;
    string s;
    s = "";
    for (int i = 0, j = 0; i < n; i++, j++)
    {
        j %= k;
        s += (char)('a' + j);
    }
    cout << s;

    return 0;
}