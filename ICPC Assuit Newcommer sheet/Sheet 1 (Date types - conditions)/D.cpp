#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double pi = 3.141592653;
    double r, area;
    cin >> r;
    area = r * r * pi;
    cout << fixed << setprecision(9) << area;
}
