#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

long long findQuotient(int dividend, int divisor)
{
    if(divisor == 0)
    {
        return INT_MAX;
    }

    long long a = abs((long long)dividend);
    long long b = abs((long long)divisor);

    long long start = 0;
    long long end = a;
    long long ans = 0;

    while(start <= end)
    {
        long long mid = start + (end - start) / 2;

        if(mid * b == a)
        {
            ans = mid;
            break;
        }
        else if(mid * b < a)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if((dividend < 0) ^ (divisor < 0))
    {
        return -ans;
    }

    return ans;
}

int main()
{
    int dividend, divisor;

    cout << "Enter Dividend: ";
    cin >> dividend;

    cout << "Enter Divisor: ";
    cin >> divisor;

    cout << "Quotient = " << findQuotient(dividend, divisor);

    return 0;
}