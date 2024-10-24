#include <iostream>
using namespace std;

int main(void)
{
    unsigned short int num;
    cin >> num;
    if (num <= 2)
    {
        printf("-1");
    }
    else
    {
        for (int i = 2; i <= num; i += 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
