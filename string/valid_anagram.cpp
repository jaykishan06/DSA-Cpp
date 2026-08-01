// class Solution {
// public:
//     bool isAnagram(const string& s, const string& t) {
//         // Implement logic to check if `t` is an anagram of `s`
//         int arr[1000] ={0};
//         //for stirng s 
//         for(int i=0; i<s.length(); i++){
//         char ch =s[i];
//         arr[ch]++;
//         }

//         //for stirng t decrrease order 
//         for(int i=0 ; i<t.length(); i++){
//             char ch =t[i];
//             arr[ch]--;
//         }
//         // check all the occurance only  one time
//         for(int i=0; i<1000; i++){
//             if(arr[i]!=0){
//                 return false;
//             }
//         }
//         return true;
//     }
// };