// class StringSorter {
// public:
//     static vector<string> customSort(vector<string>& arr,
//                                      const string& order) {

//         // Store rank of every character
//         vector<int> rank(26);

//         for (int i = 0; i < 26; i++) {
//             rank[order[i] - 'a'] = i;
//         }

//         // Custom comparator
//         sort(arr.begin(), arr.end(),
//              [&](const string& a, const string& b) {

//             int n = min(a.size(), b.size());

//             // Compare characters one by one
//             for (int i = 0; i < n; i++) {

//                 if (a[i] != b[i]) {
//                     return rank[a[i] - 'a'] <
//                            rank[b[i] - 'a'];
//                 }
//             }

//             // If one string is a prefix of another
//             return a.size() < b.size();
//         });

//         return arr;
//     }
// };