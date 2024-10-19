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
int grid[11][11];
int n, m;
#define size_arr(name_arr) (sizeof(name_arr) / sizeof(name_arr[0]))
#define ll long long

int solve(int x, int y, int sum_path)
{

    if (x < 0 || x >= n)
    {
        return -2e6;
    }
    if (y < 0 || y >= m)
    {
        return -2e6;
    }
    if (x == n - 1 && y == m - 1)
    {
        return sum_path + grid[x][y];
    }

    int down = solve(x + 1, y, sum_path + grid[x][y]);

    int right = solve(x, y + 1, sum_path + grid[x][y]);

    return max(down, right);
}
int main()
{
    Muhammad();

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    cout << solve(0, 0, 0);

    return 0;
}