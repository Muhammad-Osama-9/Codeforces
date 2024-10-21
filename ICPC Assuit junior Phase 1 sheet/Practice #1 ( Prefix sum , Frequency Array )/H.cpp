
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

#define s_coins(name_coins) (sof(name_coins) / sof(name_coins[0]))
#define ll long long

long long maxl(long long a, long long b)
{
    if (a > b)
        return a;
    else
        return b;
}

#define get_bit(bit, pos) ((bit >> pos) & 1LL)
#define set_bit(bit, pos) (bit |= (1LL << pos))
#define clear_bit(bit, pos) ((bit &= (~(1LL << pos))))
#define tog_bit(bit, pos) ((bit ^= (1LL << pos)))
#define cin(arr)        \
    for (auto &i : arr) \
    cin >> i
#define cout(arr)         \
    for (auto &i : arr)   \
        cout << i << " "; \
    cout << "\n";

int main()
{
    Muhammad();
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    vector<int> res(n + 3, 0);

    for (auto &i : grid)
        for (auto &j : i)
            cin >> j;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int cnt = 0;
            for (int l = 0; l < n; l++)
            {
                if (grid[j][l] == i)
                    cnt++;
            }
            if (cnt == n - i && !res[j + 1])
            {
                res[j + 1] = i;
                break;
            }
        }
    }

    for (int i = 1; i <= n; i++)
        cout << res[i] << " ";
    return 0;
}
