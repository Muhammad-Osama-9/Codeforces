
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

#define M_PI 3.14159265358979323846 /* pi */

signed main()
{

    Muhammad();
    string s;
    cin >> s;
    int a, b, angle;
    cin >> a >> b >> angle;
    long double res;
    if (s == "cliff")
    {
        res = a * b * sin(angle * (M_PI / 180.0));
    }
    else
    {
        res = a * b * cos(angle * (M_PI / 180.0));
    }
    cout << fixed << setprecision(6);
    cout << abs(res);
    return 0;
}
