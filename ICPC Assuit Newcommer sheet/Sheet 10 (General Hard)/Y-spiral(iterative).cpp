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

    cin.tie(0);
    std::cout.tie(0);
    ios_base::sync_with_stdio(0);
}


void sol (const vector<vector<long long>>& matrix, int n, int m) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    vector<long long> result;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    for (long long num : result) {
        cout << num << " ";
    }
}

int main() {
    Muhammad() ; 
    int n, m;
    cin >> n >> m;

    vector<vector<long long>> matrix(n, vector<long long>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    sol(matrix, n, m);
    return 0;
}
