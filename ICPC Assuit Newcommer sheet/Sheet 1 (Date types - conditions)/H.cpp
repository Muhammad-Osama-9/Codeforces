#include <iostream>
using namespace std;

void floor(int num, int div)
{
    printf("floor %d / %d = %d\n", num, div, num / div);
}
void ciel(int num, int div)
{
    int result = num / div;
    if (num % div > 0)
        result++;
    printf("ceil %d / %d = %d\n", num, div, result);
}
void round(int num, int div)
{
    int result = num / div;
    float r = (float)div / 2;
    if (num % div >= r)
    {
        result++;
    }
    printf("round %d / %d = %d", num, div, result);
}

int main(void)
{
    int num, div;
    scanf("%d%d", &num, &div);
    floor(num, div);
    ciel(num, div);
    round(num, div);

    return 0;
}
