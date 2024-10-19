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

#define size_arr(name_arr) (sizeof(name_arr) / sizeof(name_arr[0]))
#define ll long long
int n, w;
int cost[21], weight[21];

/**
 * Solves the 0/1 Knapsack problem using recursion.
 *
 * @param index The current index of the item being considered.
 * @param par_w The current weight of the items in the knapsack.
 * @param par_c The current cost of the items in the knapsack.
 *
 * @return The maximum cost that can be achieved without exceeding the maximum weight.
 */
int solve(int index, int par_w, int par_c)
{

    if (par_w > w)
    {
        return -2e8;
    }
    else if (index >= n)
    {
        return par_c;
    }
    // int sum_take = par_c;
    // int sum_skip = par_c;

    // take
    int sum_take = solve(index + 1, par_w + weight[index], par_c + cost[index]);
    // skip
    int sum_skip = solve(index + 1, par_w, par_c);

    // cout<< par_w << ' ' << sum_skip << " " << sum_take << "\n";

    return max(sum_skip, sum_take);
}
int main()
{
    Muhammad();

    

    return 0;
}