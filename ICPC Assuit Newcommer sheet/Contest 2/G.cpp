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

/* section : Main */

int main()
{
    Muhammad();
    int test;
    cin >> test;
    while (test--)
    {
        long long n, s;
        cin >> n >> s;

        vector<long long> ans;
        long long res = 0, length_numbers = 0;
        bool flag_res = false;
        long long removed_val = -1;
        for (int i = 1; i <= n; i++)
        {
            res += i;
            ans.push_back(i);
            if (res == s)
            {
                flag_res = true;
                break;
            }
            else if (res > s)
            {
                removed_val = res - s;
                flag_res = true;
                break;
            }
        }
        if (flag_res)
        {

            for (auto i : ans)
            {
                if (i != removed_val)
                {
                    cout << i << " ";
                }
            }
        }
        else
        {
            cout << -1;
        }

        cout << "\n";
    }
}
