// #include <bits/stdc++.h>
// using namespace std;

// class MyMagicDictionary {
// private:
//     unordered_set<string> dictionary_set;

// public:
//     MyMagicDictionary() {
//     }

//     void build(vector<string> dictionary) {
//         for (string word : dictionary) {
//             dictionary_set.insert(word);
//         }
//     }

//     bool search(const string& searchWord) {

//         for (const string& word : dictionary_set) {

//             // Length must be the same
//             if (word.length() != searchWord.length()) {
//                 continue;
//             }

//             int difference = 0;

//             // Compare each character
//             for (int i = 0; i < word.length(); i++) {

//                 if (word[i] != searchWord[i]) {
//                     difference++;
//                 }
//             }

//             // Exactly one character should be different
//             if (difference == 1) {
//                 return true;
//             }
//         }

//         return false;
//     }
// };