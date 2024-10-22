#include <iostream>
using namespace std;
void swapLarge(unsigned int *num1, unsigned int *num2)
{
    unsigned int temp;
    if (*num2 > *num1)
    {
        temp = *num2;
        *num2 = *num1;
        *num1 = temp;
    }
}

int main(void)
{
    unsigned int num1, num2;
    cin >> num1 >> num2;
    swapLarge(&num1, &num2);

    if (num1 % num2 == 0)
    {
        cout << "Multiples";
    }
    else
    {
        cout << "No Multiples";
    }
    return 0;
}
