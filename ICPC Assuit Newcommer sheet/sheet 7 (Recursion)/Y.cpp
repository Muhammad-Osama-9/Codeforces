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

#define ST_BIT(reg, bit) reg |= (1 << bit)
#define CLR_BIT(reg, bit) reg &= ~(1 << bit)
#define GIT_BIT(reg, bit) ((reg >> bit) & (1))
#define TOGGLE_BIT(reg, bit) reg ^= (1 << bit)

#define GETBIT(N, B) ((N >> B) & 1)
#define SETBIT(N, B) ((1 << B) | N)
#define CLR(N, B) ((~(1 << B)) & N)
#define TOG(N, B) ((1 << B) ^ N)
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
int steps[] = {1, 2, 3};
/* section : Main */
long long step(int s, int e)
{
    if (s > e)
    {
        return 0;
    }
    if (s == e)
    {
        return 1;
    }
    long long res = 0;
    for (int i = 0; i < 3; i++)
    {
        res += step(s + steps[i], e);
    }
    return res;
}
int main()
{
    Muhammad();
    int s, e;
    cin >> s >> e;
    cout << step(s, e);
}