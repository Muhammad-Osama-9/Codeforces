#include <iostream>
using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 1)
        {
            printf("0");
            return 0;
        }
    }
    counter++;
    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] / 2;
            if (arr[i] % 2 == 1)
            {
                cout << counter;
                return 0;
            }
        }
        counter++;
    }
    return 0;
}
