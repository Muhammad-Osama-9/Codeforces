
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
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int h, m;
    if (h2 <= h1)
    {
        h = 24 - (h1 - h2);
    }
    else
    {
        h = h2 - h1;
    }
    m = m2 - m1;
    if (m < 0)
    {
        m += 60;
        h--;
    }
    cout << h % 24 << " " << m;
    return 0;
}
