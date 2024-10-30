
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
    string a, b;
    cin >> a >> b;
    if ((a == "Blue" && b == "Red") || (a == "Red" && b == "Blue"))
    {
        cout << "Purple";
    }
    else if ((a == "Blue" && b == "Yellow") || (a == "Yellow" && b == "Blue"))
    {
        cout << "Green";
    }
    else if ((a == "Yellow" && b == "Red") || (a == "Red" && b == "Yellow"))
    {
        cout << "Orange";
    }
    return 0;
}
