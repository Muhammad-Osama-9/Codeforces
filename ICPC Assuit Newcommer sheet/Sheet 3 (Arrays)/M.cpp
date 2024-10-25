#include <bits/stdc++.h>
using namespace std;
// prefix sum //
int main()
{
    int size;
    cin >> size;
    int arr[size];
    int min = INT_MAX;
    int max = INT_MIN;
    int index_max;
    int index_min, temp;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
        {
            max = arr[i];
            index_max = i;
        }
        if (min > arr[i])
        {
            min = arr[i];
            index_min = i;
        }
    }
    temp = arr[index_max];
    arr[index_max] = arr[index_min];
    arr[index_min] = temp;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
