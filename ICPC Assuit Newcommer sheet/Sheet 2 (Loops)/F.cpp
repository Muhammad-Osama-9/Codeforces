#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin >> num;
    for (int i = 1; i <= 12; i++)
        printf("%d * %d = %d\n", num, i, num * i);
    return 0;
}
