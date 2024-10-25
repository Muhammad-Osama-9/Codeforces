#include <bits/stdc++.h>
using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE printf("\n");

int main()
{

    int size, test;
    cin >> size >> test;
    long long sum = 0;
    long long arr[size + 1];
    long long arr_sum[size + 1];
    arr[0] = 0;
    arr_sum[0] = 0;
    for (int i = 1; i <= size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        arr_sum[i] = sum;
    }
    int num1, num2;

    while (test--)
    {
        cin >> num1 >> num2;
        cout << arr_sum[num2] - arr_sum[num1 - 1];
        NEW_LINE
    }
    return 0;
}