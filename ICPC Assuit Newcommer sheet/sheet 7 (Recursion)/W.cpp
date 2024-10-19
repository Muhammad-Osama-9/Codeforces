/**
 * @author : Muhammad Osama Elarby
 * @date :

*/

/* section : Includes */

#include <bits/stdc++.h>

using namespace std;

/* section : fucntion Implentaion  */
// #define ONLINE_JUDGE

inline void Muhammad(void)
{
    cin.tie(0);
    std::cout.tie(0);
    ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
}

#define size_arr(name_arr) (sizeof(name_arr) / sizeof(name_arr[0]))
#define ll long long
ll n;

bool solve(ll res, bool state)
{
    // cout << res << '\n';
    if (res > n)
    {
        return state;
    }
    else if (res == n)
    {

        state = true;
        return state;
    }

    return (solve(res * 10, state) |
            solve(res * 20, state));
}
int main()
{
    Muhammad();
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;

        if (solve(1, false))
            cout << "YES";
        else
            cout << "NO";

        cout << "\n";
    }

    return 0;
}