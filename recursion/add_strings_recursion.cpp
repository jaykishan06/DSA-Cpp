// class Solution {
// public:
//     string addStrings(string num1, string num2) {
//         int i = num1.size() - 1;
//         int j = num2.size() - 1;

//         string ans = "";

//         // Recursive helper function
//         function<void(int, int, int)> add =
//             [&](int i, int j, int carry) {
//                 // Base case
//                 if (i < 0 && j < 0 && carry == 0) {
//                     return;
//                 }

//                 int sum = carry;

//                 if (i >= 0) {
//                     sum += num1[i] - '0';
//                 }

//                 if (j >= 0) {
//                     sum += num2[j] - '0';
//                 }

//                 ans.push_back(char(sum % 10 + '0'));

//                 add(i - 1, j - 1, sum / 10);
//             };

//         add(i, j, 0);

//         reverse(ans.begin(), ans.end());

//         return ans;
//     }
// };