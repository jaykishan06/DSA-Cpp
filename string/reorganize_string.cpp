// class Solution {
// public:
//     string reorganizeString(string s) {

//         int freq[26] = {0};

//         // Step 1: Count frequency
//         for(char ch : s) {
//             freq[ch - 'a']++;
//         }

//         // Step 2: Find character with maximum frequency
//         int maxFreq = 0;
//         char maxChar;

//         for(int i = 0; i < 26; i++) {
//             if(freq[i] > maxFreq) {
//                 maxFreq = freq[i];
//                 maxChar = i + 'a';
//             }
//         }

//         // Step 3: Check if answer is possible
//         if(maxFreq > (s.length() + 1) / 2)
//             return "";

//         // Step 4: Fill maximum frequency character first
//         int index = 0;
//         while(freq[maxChar - 'a'] > 0) {
//             s[index] = maxChar;
//             index += 2;
//             freq[maxChar - 'a']--;
//         }

//         // Step 5: Fill remaining characters
//         for(int i = 0; i < 26; i++) {
//             while(freq[i] > 0) {

//                 if(index >= s.length())
//                     index = 1;

//                 s[index] = i + 'a';
//                 index += 2;
//                 freq[i]--;
//             }
//         }

//         return s;
//     }
// };