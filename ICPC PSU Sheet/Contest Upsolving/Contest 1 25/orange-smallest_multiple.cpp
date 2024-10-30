
/**
* @author : Muhammad Osama Elarby
* @date :

*/

/* section : Includes */

#include <bits/stdc++.h>

using namespace std;

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

#define ll long long
#define int ll
long long maxl(long long a, long long b)
{
    if (a > b)
        return a;
    else
        return b;
}
long long minl(long long a, long long b)
{
    if (a < b)
        return a;
    else
        return b;
}

signed main()
{

    Muhammad();
    int a, b;
    cin >> a >> b;
    cout << (b / a) * a + a;

    return 0;
}
