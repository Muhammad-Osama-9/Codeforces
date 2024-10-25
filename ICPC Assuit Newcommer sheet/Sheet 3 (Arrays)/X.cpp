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
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
}

#define size_arr(name_arr) (sizeof(name_arr) / sizeof(name_arr[0]))
#define ll long long

int main()
{
    Muhammad();
    int n, m;
    cin >> n >> m;
    char grid[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int _x, _y;
    cin >> _x >> _y;

    _x--;
    _y--;
    // cout << _x << " " << _y << "\n";
    int dx[] = {
        -1, -1, -1,
        0, 0,
        1, 1, 1};
    int dy[] = {
        -1, 0, 1,
        -1, 1,
        -1, 0, 1};
    int ans = 0;
    for (int i = 0; i < 8; i++)
    {
        int x = _x + dx[i];
        int y = _y + dy[i];
        //  cout << x << " " << y << "\n";
        bool valid = (x >= 0 && x < n && y >= 0 && y < m);
        if (valid)
        {
            if (grid[x][y] == 'x')
            {
                ans++;
            }
        }
        else
        {
            ans++;
        }
    }
    if (ans == 8)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
