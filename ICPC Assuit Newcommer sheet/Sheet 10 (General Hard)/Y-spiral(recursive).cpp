/**
 * @author : Muhammad Osama Elarby
 * @date :

*/

/* section : Includes */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#pragma GCC target("bmi,bmi2,lzcnt,popcnt") // bit manipulation
/* section : Macros */

#define Time cerr << "\nTime Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";

/* section : fucntion Implentaion  */

inline void Muhammad(void)
{
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

}

int directions[4][2] = {
    {0, 1},
    {1, 0},
    {0, -1},
    {-1, 0}};

int n, m;
void sol(int x, int y, int direc_count, int count, vector<vector<long long>> &grid, vector<vector<bool>> &visited)
{

    if (count >= (n * m))
        return;

    if (x >= n)
    {
  
        x = n - 1;
        int offset = direc_count + 1;
        sol(x + directions[offset % 4][0], y + directions[offset % 4][1], direc_count + 1, count, grid, visited);
        return;
    }
    else if (x < 0)
    {
      
        x = 0;

        int offset = direc_count + 1;
        sol(x + directions[offset % 4][0], y + directions[offset % 4][1], direc_count + 1, count, grid, visited);
        return;
    }

    if (y >= m)
    {
      
        y = m - 1;
        int offset = direc_count + 1;
        sol(x + directions[offset % 4][0], y + directions[offset % 4][1], direc_count + 1, count, grid, visited);
        return;
    }
    else if (y < 0)
    {
     
        y = 0;
        int offset = direc_count + 1;
        sol(x + directions[offset % 4][0], y + directions[offset % 4][1], direc_count + 1, count, grid, visited);
        return;
    }

    if (visited[x][y])
    {

        int offset = direc_count + 1  ;

        int last_x = x - directions[direc_count % 4][0] ; 
        int last_y = y - directions[direc_count % 4][1] ;

        sol(last_x + directions[offset % 4][0], last_y + directions[offset % 4][1], direc_count+1, count, grid, visited);
        return;
    }

  cout << grid[x][y] << " " ; 
    visited[x][y] = true;
    sol(x + directions[direc_count % 4][0], y + directions[direc_count % 4][1], direc_count, count + 1, grid, visited);
}
/* section : Main */

int main()
{
   Muhammad();

    cin >> n >> m;
    vector<vector<long long>> grid(n, vector<long long>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    sol(0, 0, 0, 0, grid, visited);

    return 0;
}
