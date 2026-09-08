// class Solution {
// public:
//     string decodeMessage(string message) {
//         string result = "";

//         for (int i = 0; i < message.length(); i++) {
//             int num = message[i] - '0';

//             result += char('a' + num - 1);
//         }

//         return result;
//     }
// };