
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
    vector<pair<int, int>> range;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        range.push_back({min(l, r), max(r, l)});
    }
    sort(range.begin(), range.end());
    int start = range[0].first;
    int end = range[0].second;
    set<pair<int, int>> ans;
    for (auto i : range)
    {
        if (i.first > start && i.second < end)
            continue;

        if (i.first < start && i.second > end)
        {
            start = i.first;
            end = i.second;
        }
        else if (i.first <= end && i.second > end)
        {
            end = i.second;
        }
        else if (start > i.first && start < i.second)
            start = i.first;

        else if (i.first > end)
        {
            ans.insert({start, end});
            start = i.first;
            end = i.second;
        }
    }
    ans.insert({start, end});
    for (auto i : ans)
        cout << i.first << " " << i.second << "\n";

    return 0;
}
