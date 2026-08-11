// class Solution {
// public:
//     vector<int> addTwoNumbers(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans;

//         int i = 0;
//         int j = 0;
//         int carry = 0;

//         while (i < nums1.size() || j < nums2.size() || carry) {

//             int sum = carry;

//             if (i < nums1.size()) {
//                 sum += nums1[i];
//                 i++;
//             }

//             if (j < nums2.size()) {
//                 sum += nums2[j];
//                 j++;
//             }

//             ans.push_back(sum % 10);
//             carry = sum / 10;
//         }

//         return ans;
//     }
// };