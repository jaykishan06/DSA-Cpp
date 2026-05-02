// Problem: Print Even Numbers from 1 to N
// Concept: Loop + Condition

class Solution {
public:
    void printEvenNumbers(int n) {

        // 1 se n tak loop chalayenge
        for (int i = 1; i <= n; i++) {

            // check kar rahe hai ki number even hai ya nahi
            if (i % 2 == 0) {

                // agar even hai to print karo
                cout << i;

                // last me extra space avoid karne ke liye
                if (i + 2 <= n) cout << " ";
            }
        }
    }
};