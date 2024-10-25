#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE printf("\n");
int main()
{
    int test;
    cin >> test;
    int size, counter, minn = INT32_MAX;
    while (test--)
    {
        counter = 0;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            minn = arr[i];
            for (int j = i; j < size; j++)
            {

                if (arr[j] >= minn)
                {
                    minn = arr[j];
                    counter++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << counter;
        NEW_LINE
    }

    return 0;
}