// class Solution {
// public:
//     vector<string> findAndReplacePattern(vector<string>& words,
//                                           string pattern) {

//         vector<string> ans;

//         for (string word : words) {

//             // Pattern to Word mapping
//             unordered_map<char, char> pToW;

//             // Word to Pattern mapping
//             unordered_map<char, char> wToP;

//             bool isMatch = true;

//             for (int i = 0; i < pattern.length(); i++) {

//                 char p = pattern[i];
//                 char w = word[i];

//                 // Pattern character already mapped
//                 if (pToW.find(p) != pToW.end()) {

//                     if (pToW[p] != w) {
//                         isMatch = false;
//                         break;
//                     }
//                 }

//                 // Word character already mapped
//                 else if (wToP.find(w) != wToP.end()) {

//                     if (wToP[w] != p) {
//                         isMatch = false;
//                         break;
//                     }
//                 }

//                 // New mapping
//                 else {
//                     pToW[p] = w;
//                     wToP[w] = p;
//                 }
//             }

//             if (isMatch) {
//                 ans.push_back(word);
//             }
//         }

//         return ans;
//     }
// };