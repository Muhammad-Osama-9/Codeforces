#include <iostream>
using namespace std;

void max(int arr[3])
{
    int maxx = arr[0];
    for (int i = 1; i < 3; i++)
    {
        if (maxx < arr[i])
        {
            maxx = arr[i];
        }
    }
    printf(" %d", maxx);
}
void min(int arr[3])
{

    int minn = arr[0];
    for (int i = 1; i < 3; i++)
    {
        if (minn > arr[i])
        {
            minn = arr[i];
        }
    }
    printf("%d", minn);
}
int main(void)
{
    int nums[3];

    cin >> nums[0] >> nums[1] >> nums[2];

    min(nums);
    max(nums);
    return 0;
}
