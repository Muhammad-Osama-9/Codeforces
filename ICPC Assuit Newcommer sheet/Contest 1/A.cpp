#include <iostream>
using namespace std;

int main(void)
{
    double discount, price, old_price;
    cin >> discount >> price;
    old_price = price / (1 - (discount / 100));
    printf("%0.2lf", old_price);
    return 0;
}
