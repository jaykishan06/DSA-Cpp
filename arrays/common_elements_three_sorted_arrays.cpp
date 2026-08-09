// class Solution {
// public:
//     vector<int> commonElements(vector<int>& array1,
//                                 vector<int>& array2,
//                                 vector<int>& array3) {

//         vector<int> ans;

//         int i = 0, j = 0, k = 0;

//         while(i < array1.size() &&
//               j < array2.size() &&
//               k < array3.size()) {

//             if(array1[i] == array2[j] &&
//                array2[j] == array3[k]) {

//                 if(ans.empty() || ans.back() != array1[i]) {
//                     ans.push_back(array1[i]);
//                 }

//                 i++;
//                 j++;
//                 k++;
//             }
//             else if(array1[i] < array2[j]) {
//                 i++;
//             }
//             else if(array2[j] < array3[k]) {
//                 j++;
//             }
//             else {
//                 k++;
//             }
//         }

//         return ans;
//     }
// };