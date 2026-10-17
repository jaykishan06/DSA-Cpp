// class Solution {
// public:
//     bool checkPalindrome(string &s, int left, int right) {
//         // Skip non-alphanumeric characters
//         while (left < right && !isalnum(s[left])) {
//             left++;
//         }

//         while (left < right && !isalnum(s[right])) {
//             right--;
//         }

//         // Base case
//         if (left >= right) {
//             return true;
//         }

//         // Compare characters ignoring case
//         if (tolower(s[left]) != tolower(s[right])) {
//             return false;
//         }

//         // Recursive call
//         return checkPalindrome(s, left + 1, right - 1);
//     }

//     bool isPalindrome(string s) {
//         return checkPalindrome(s, 0, s.size() - 1);
//     }
// };