#include <bits/stdc++.h>

using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE cout << "\n";
#define GET_BIT(REG, BITNO) ((REG >> BITNO) & (1))
int main()
{
    Muhammad_Osama int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        if (i == j)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << " " << arr[j] << " ";
        }
    }
    return 0;
}