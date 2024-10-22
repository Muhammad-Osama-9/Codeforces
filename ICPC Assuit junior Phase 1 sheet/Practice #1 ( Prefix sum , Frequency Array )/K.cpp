
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
    vector<int> nums(n);
    cin(nums);
    vector<ll> prefix_unsort(n + 2, 0);
    vector<ll> prefix_sort(n + 2, 0);

    for (int i = 0; i < n; i++)
    {
        prefix_unsort[i + 1] = prefix_unsort[i] + nums[i];
    }
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        prefix_sort[i + 1] = prefix_sort[i] + nums[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
        {
            cout << prefix_unsort[r] - prefix_unsort[l - 1];
        }
        else
        {
            cout << prefix_sort[r] - prefix_sort[l - 1];
        }
        cout << "\n";
    }

    return 0;
}
