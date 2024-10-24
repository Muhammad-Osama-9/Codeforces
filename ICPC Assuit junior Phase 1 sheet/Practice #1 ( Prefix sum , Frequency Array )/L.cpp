
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

    freopen("mex.in", "r", stdin);
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
        int n, q;
        cin >> n >> q;
        vector<int> nums(n);
        cin(nums);
        vector<int> prefix(n + 4);
        vector<int> sufix(n + 4);
        vector<int> freqs(n + 4, 0);
        int minn = 1;
        for (int i = 0; i < n; i++)
        {
            if (minn == nums[i])
            {
                while (freqs[++minn] == 1)
                    ;
            }
            prefix[i] = minn;
            freqs[nums[i]] = 1;
        }
        for (auto &i : freqs)
            i = 0;

        minn = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            if (minn == nums[i])
            {
                while (freqs[++minn] == 1)
                    ;
            }
            sufix[i] = minn;
            freqs[nums[i]] = 1;
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            cout << min(sufix[l], prefix[r]);

            cout << "\n";
        }
    }

    return 0;
}
