// class Solution {
// public:
//     long long int findQuotient(int dividend, int divisor) {

//         // Division by zero
//         if(divisor == 0)
//             return INT_MAX;

//         // Determine sign of answer
//         bool negative = (dividend < 0) ^ (divisor < 0);

//         // Convert to positive
//         long long a = abs((long long)dividend);
//         long long b = abs((long long)divisor);

//         long long start = 0;
//         long long end = a;
//         long long ans = 0;

//         while(start <= end)
//         {
//             long long mid = start + (end - start) / 2;

//             if(mid * b == a)
//             {
//                 ans = mid;
//                 break;
//             }
//             else if(mid * b < a)
//             {
//                 ans = mid;
//                 start = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }

//         if(negative)
//             return -ans;

//         return ans;
//     }
// };