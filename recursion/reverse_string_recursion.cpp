// class Solution {
// public:

//     void reverse(vector<char>& s, int start, int end) {

//         // Base case
//         if (start >= end) {
//             return;
//         }

//         // Swap first and last character
//         swap(s[start], s[end]);

//         // Recursive call
//         reverse(s, start + 1, end - 1);
//     }

//     vector<char> reverseString(vector<char>& s) {

//         reverse(s, 0, s.size() - 1);

//         return s;
//     }
// };