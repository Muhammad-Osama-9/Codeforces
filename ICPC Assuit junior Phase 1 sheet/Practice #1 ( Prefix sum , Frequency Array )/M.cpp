
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
    int test;
    cin >> test;
    while (test--)
    {
        int s, q;
        cin >> s >> q;
        vector<int> arr(s, 0);

        while (q--)
        {
            int x;
            cin >> x;
            int x_cpy = x;
            x--;
            while (x < s)
            {
                arr[x] = 1;
                x += x_cpy;
            }
        }
        cout(arr);
    }
    return 0;
}
