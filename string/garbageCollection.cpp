// class Solution {
// public:
//     int garbageCollection(vector<string>& garbage,
//                            vector<int>& travel) {

//         int totalTime = 0;

//         int lastM = -1;
//         int lastP = -1;
//         int lastG = -1;

//         // Find total collection time and last house
//         // for each garbage type
//         for (int i = 0; i < garbage.size(); i++) {

//             for (char ch : garbage[i]) {

//                 totalTime++;

//                 if (ch == 'M') {
//                     lastM = i;
//                 }
//                 else if (ch == 'P') {
//                     lastP = i;
//                 }
//                 else if (ch == 'G') {
//                     lastG = i;
//                 }
//             }
//         }

//         // Add travel time for Metal truck
//         for (int i = 0; i < lastM; i++) {
//             totalTime += travel[i];
//         }

//         // Add travel time for Paper truck
//         for (int i = 0; i < lastP; i++) {
//             totalTime += travel[i];
//         }

//         // Add travel time for Glass truck
//         for (int i = 0; i < lastG; i++) {
//             totalTime += travel[i];
//         }

//         return totalTime;
//     }
// };