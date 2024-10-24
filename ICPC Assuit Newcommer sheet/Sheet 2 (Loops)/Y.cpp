#include <iostream>
using namespace std;

int main(void)
{
    int num, sum = 0, m = 0, n = 1;
    cin >> num;
    if (num == 1)
        cout << "0";
    else
    {
        cout << "0 1 ";
    }
    for (int i = 1; i < num - 1; i++)
    {

        sum = m + n;
        cout << sum << " ";
        m = n;
        n = sum;
    }

    return 0;
}
