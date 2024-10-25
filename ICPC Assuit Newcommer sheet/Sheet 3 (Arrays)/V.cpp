#include <bits/stdc++.h>
using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE printf("\n");

int main()
{
    int a, m;
    cin >> a >> m;

    int index;
    int arr[a];
    int freq_arr[m];
    for (int i = 0; i < m; i++)
    {
        freq_arr[i] = 0;
    }
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        index = arr[i];
        index--;
        freq_arr[index]++;
    }
    for (int i = 0; i < m; i++)
    {
        cout << freq_arr[i];
        NEW_LINE
    }

    return 0;
}