#include <iostream>
using namespace std;

int main(void)
{
    long long num;
    int size, mins;
    long long minn = LONG_MAX;
    int counter = 0;
    cin >> size >> mins;

    for (int i = 1; i <= size; i++)
    {
        counter++;
        cin >> num;
        if (num < minn)
        {
            minn = num;
        }

        if (counter == mins || i == size)
        {
            printf("%lld ", minn);
            counter = 0;
            minn = LONG_MAX;
        }
    }
    return 0;
}
 