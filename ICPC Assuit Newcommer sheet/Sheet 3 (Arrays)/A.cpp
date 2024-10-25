#include <iostream>
using namespace std;
int main(void)
{
    long long size, num, sum = 0;

    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        sum = sum + num;
    }

    if (sum < 0)
    {
        cout << sum * (-1);
    }
    else
    {
        cout << sum;
    }

    return 0;
}
