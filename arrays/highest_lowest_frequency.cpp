// class Solution {
// public:
//  int findMode( vector<int>& arr) {
//         // Implement logic to find mode
//         sort (arr.begin(),arr.end());
//         int n = arr.size();
//         int maxFreq =1;
//         int mode=arr[0];
//         int cf=1;
//         for(int i=1; i<n; i++){
//             if(arr[i]==arr[i-1]){
//                 cf++;
//             }
//             else{
//                 cf=1;
//             }
//             if(cf>maxFreq){
//                 maxFreq= cf;
//                 mode= arr[i];
//             }
//         }
//         return mode;
//     }

// int lowf(vector<int>& arr) {

//     sort(arr.begin(), arr.end());

//     int n = arr.size();
//     int minFreq = n;      // change
//     int mode = arr[0];

//     int i = 0;

//     while(i < n) {

//         int cf = 1;
//         int j = i + 1;

//         while(j < n && arr[j] == arr[i]) {
//             cf++;
//             j++;
//         }

//         if(cf < minFreq) {
//             minFreq = cf;
//             mode = arr[i];    // arr[i]-1 nahi
//         }

//         i = j;
//     }

//     return mode;
// }
//     pair<int, int> highestAndLowestFrequency(vector<int>& arr) {
//         // Implement logic to find elements with highest and lowest frequency
//         int hf= findMode(arr);
//         int lf = lowf(arr);
//         return {hf, lf}; // Placeholder return; user will complete the logic
//     }
// };