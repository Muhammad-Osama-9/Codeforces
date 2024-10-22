#include <iostream>
using namespace std;

int main(void)
{
    float num;
    int num_;
    cin >> num;
    num_ = num;
    if (num > num_)
    {
        printf("float %d %f", num_, num - num_);
    }
    else
    {
        printf("int %d", num_);
    }
    return 0;
}
