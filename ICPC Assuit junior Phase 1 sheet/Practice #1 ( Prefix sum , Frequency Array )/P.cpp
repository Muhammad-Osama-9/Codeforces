
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
#define get_bit(bit, pos) ((bit >> pos) & 1LL)
#define set_bit(bit, pos) (bit |= (1LL << pos))
#define clear_bit(bit, pos) ((bit &= (~(1LL << pos))))
#define tog_bit(bit, pos) ((bit ^= (1LL << pos)))
#define dijkstra_q priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq

#define cin(arr)        \
    for (auto &i : arr) \
    cin >> i
#define cout(arr)         \
    for (auto &i : arr)   \
        cout << i << " "; \
    cout << "\n";

signed main()
{
    Muhammad();

    int size;
    int k;
    cin >> size >> k;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> nums(size);
    cin(nums);

    /*
       -> get all k larget element in complixity of  N log K  <-

    */
    for (int i = 0; i < size; i++)
    {
        pq.push(nums[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }

    /*
            Make Frequency on k largest element
    */
    map<int, int> mp;

    while (!pq.empty())
    {
        mp[pq.top()]++;
        pq.pop();
    }

    int count = 0;
    int l = 0;
    vector<int> ans;
    int res = 0;
    /*
            Take sub array until i find next k largest element
    */

    for (int i = 0; i < size; i++, l++)
    {
        if (mp.count(nums[i]))
        {
            res += nums[i];
            count++;
            mp[nums[i]]--;
            if (mp[nums[i]] == 0)
                mp.erase(nums[i]);
        }
        if (count >= 2) // when found the next largest element
        {
            // reset
            ans.push_back(l);
            count = 1;
            l = 0;
        }
    }

    ans.push_back(l);
    cout << res << "\n";
    cout(ans);
    return 0;
}
