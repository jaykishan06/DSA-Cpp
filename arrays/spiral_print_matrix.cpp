// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         // Implement this method
//         int n = matrix.size();
//         int m = matrix[0].size();

//         int startingRow = 0;
//         int startingCol = 0;
//         int endingRow = n-1;
//         int endingCol = m-1;

//         vector<int> ans;
//         //logic priint element karenge jab tab sab print na ho jaye
//         while (startingRow<= endingRow && startingCol<= endingCol ){
//             //starting row
//             for (int col=startingCol; col<=endingCol; col++){
//                 ans.push_back(matrix[startingRow][col]);
//             }
//             startingRow++;
//             //ending coloum
//             for(int row= startingRow ; row <=endingRow; row++){
//                 ans.push_back(matrix[row][endingCol]);
//             }
//             endingCol--;
//             //ending row 
//             if(startingRow<=endingRow){
//                 //element print 
//                      for (int col= endingCol; col >=startingCol; col--){
//             ans.push_back(matrix[endingRow][col]);
//         }
//         endingRow--;
//             }
   
//         //starting col
//         if(startingCol<=endingCol){
//             //element print karawao
//   for(int row= endingRow; row>=startingRow; row--){
//             ans.push_back(matrix[row][startingCol]);
//         }
//         startingCol++;
//         }
      
//         }
//         return ans;
//     }
// };