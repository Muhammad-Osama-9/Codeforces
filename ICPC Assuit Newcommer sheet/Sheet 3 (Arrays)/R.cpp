#include <bits/stdc++.h>
using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE printf("\n");
int main()
{
    int size;
    cin >> size;
    int arr1[size], arr2[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }
    sort(arr1, arr1 + size);
    sort(arr2, arr2 + size);
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
        {
            cout << "no ";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}