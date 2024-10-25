#include <bits/stdc++.h>
using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE printf("\n");

int main()
{
    int size, main_diag = 0, sec_diag = 0;
    cin >> size;

    int matrix[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0, j = 0, m = 0, n = size - 1; i < size; i++, j++, n--, m++)
    {
        main_diag += matrix[i][m];
        sec_diag += matrix[j][n];
    }
    cout << abs(main_diag - sec_diag);
    return 0;
}