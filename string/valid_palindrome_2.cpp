// class Solution {
// public:
//     bool checkPalindrome(string s, int left, int right) {
//         while (left < right) {
//             if (s[left] != s[right]) {
//                 return false;
//             }

//             left++;
//             right--;
//         }

//         return true;
//     }

//     bool validPalindrome(string s) {
//         int left = 0;
//         int right = s.length() - 1;

//         while (left < right) {
//             if (s[left] != s[right]) {

//                 // Delete left character
//                 bool option1 = checkPalindrome(s, left + 1, right);

//                 // Delete right character
//                 bool option2 = checkPalindrome(s, left, right - 1);

//                 return option1 || option2;
//             }

//             left++;
//             right--;
//         }

//         return true;
//     }
// };