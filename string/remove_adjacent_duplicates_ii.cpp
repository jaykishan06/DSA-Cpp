// class Solution {
// public:
//     string removeDuplicates(string s, int k) {
//         vector<pair<char, int>> st;

//         for (char ch : s) {
//             if (!st.empty() && st.back().first == ch) {
//                 st.back().second++;

//                 if (st.back().second == k) {
//                     st.pop_back();
//                 }
//             } else {
//                 st.push_back({ch, 1});
//             }
//         }

//         string result = "";

//         for (auto p : st) {
//             result += string(p.second, p.first);
//         }

//         return result;
//     }
// };