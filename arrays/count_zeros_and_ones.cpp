#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int countZero = 0;
    int countOne = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] == 0) {
            countZero++;
        }

        else if(arr[i] == 1) {
            countOne++;
        }
    }

    cout << "Number of 0s = " << countZero << endl;
    cout << "Number of 1s = " << countOne;

    return 0;
}