#include <iostream>
using namespace std;

int main(void)
{
    char ind_ope, ind_eq;
    long long num1, num2, result;
    cin >> num1 >> ind_ope >> num2 >> ind_eq >> result;
    switch (ind_ope)
    {
    case '-':
        if (num1 - num2 == result)
            printf("Yes");
        else
        {
            printf("%lld", num1 - num2);
        }
        break;

    case '+':
        if (num1 + num2 == result)
            printf("Yes");
        else
        {
            printf("%lld", num1 + num2);
        }
        break;

    case '*':
        if (num1 * num2 == result)
            printf("Yes");
        else
        {
            printf("%lld", num1 * num2);
        }
        break;
    }
    return 0;
}
