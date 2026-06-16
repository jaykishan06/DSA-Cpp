#include <iostream>
#include <vector>
using namespace std;

string factorial(int N) {

    vector<int> result;
    result.push_back(1);

    for(int num = 2; num <= N; num++) {

        int carry = 0;

        for(int i = 0; i < result.size(); i++) {

            int product = result[i] * num + carry;

            result[i] = product % 10;
            carry = product / 10;
        }

        while(carry) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }

    string ans = "";

    for(int i = result.size() - 1; i >= 0; i--) {
        ans += (result[i] + '0');
    }

    return ans;
}

int main() {

    int N;
    cin >> N;

    cout << factorial(N);

    return 0;
}