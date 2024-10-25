#include <bits/stdc++.h>
using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE printf("\n");
#define yes cout << "will take number";
#define no cout << "will not take number";
int main()
{
    int size1, size2, search;
    cin >> size1 >> size2;
    int arr[size1][size2];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> search;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr[i][j] == search)
            {
                no return 0;
            }
        }
    }
    yes return 0;
}