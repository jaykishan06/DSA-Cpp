// #include <bits/stdc++.h>
// using namespace std;

// // Helper function to map DNA characters to 2-bit integers
// inline int charToInt(char c) {
//     switch (c) {
//     case 'A': return 0; // 00
//     case 'C': return 1; // 01
//     case 'G': return 2; // 10
//     case 'T': return 3; // 11
//     default: return -1;
//     }
// }

// class Solution {
// public:
//     vector<string> findRepeatedDnaSequences(string s) {

//         vector<string> ans;
//         unordered_map<int, int> freq;

//         int n = s.length();

//         // At least 10 characters are required
//         if (n < 10) {
//             return ans;
//         }

//         for (int i = 0; i + 10 <= n; i++) {

//             int code = 0;

//             // Convert 10-character sequence into 20-bit integer
//             for (int j = i; j < i + 10; j++) {
//                 code = (code << 2) | charToInt(s[j]);
//             }

//             freq[code]++;

//             // Add only when sequence appears for the second time
//             if (freq[code] == 2) {
//                 ans.push_back(s.substr(i, 10));
//             }
//         }

//         return ans;
//     }
// };