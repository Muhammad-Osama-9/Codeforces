
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
    vector<int> arr(n);
    cin(arr);
    vector<int> vec(n + 10, 0);
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        vec[--l]++;
        vec[r]--;
    }

    ll sum = 0;
    for (auto &i : vec)
    {
        sum += i;
        i = sum;
    }

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (vec[i] == 0)
            ans++;
    }

    cout << ans << "\n";
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == 0)
            cout << arr[i] << " ";
    }
    return 0;
}
