#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin >> num;
    long long n;

    for (int i = 0; i < num; i++)
    {
        cin >> n;
        if (n == 0)
        {
            cout << n << endl;
            continue;
        }
        while (n > 0)
        {
            cout << n % 10 << " ";

            n = n / 10;
        }
        printf("\n");
    }

    return 0;
}
