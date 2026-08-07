// class Solution {
// public:
//     void rotate90Clockwise(vector<vector<int>>& matrix, int N) {

//         // Step 1: Transpose
//         for(int i = 0; i < N; i++) {
//             for(int j = i + 1; j < N; j++) {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }

//         // Step 2: Reverse every row
//         for(int i = 0; i < N; i++) {
//             reverse(matrix[i].begin(), matrix[i].end());
//         }
//     }
// };