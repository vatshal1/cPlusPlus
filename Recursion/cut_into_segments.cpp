#include <iostream>
#include <limits.h>

using namespace std;

int segments(int target, int x, int y, int z)
{
    //* base cases
    if (target < 0)
        return INT_MIN;
    if (target == 0)
        return 0;

    //* recursive cases
    int ans1 = segments(target - x, x, y, z) + 1;
    int ans2 = segments(target - y, x, y, z) + 1;
    int ans3 = segments(target - z, x, y, z) + 1;
    int ans = max(ans1, max(ans2, ans3));

    return ans;
}

int main()
{

    int length = 7;
    int a = 2;
    int b = 3;
    int c = 5;
    int result = segments(length, a, b, c);

    cout << "maximum no. of segements are: " << result;

    return 0;
}
