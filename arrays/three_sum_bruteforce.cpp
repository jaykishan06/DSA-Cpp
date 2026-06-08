#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& num) {

    vector<vector<int>> ans;
    int n = num.size();

    sort(num.begin(), num.end());

    for(int i = 0; i < n; i++) {

        if(i > 0 && num[i] == num[i - 1])
            continue;

        for(int j = i + 1; j < n; j++) {

            if(j > i + 1 && num[j] == num[j - 1])
                continue;

            for(int k = j + 1; k < n; k++) {

                if(k > j + 1 && num[k] == num[k - 1])
                    continue;

                int sum = num[i] + num[j] + num[k];

                if(sum == 0) {
                    ans.push_back({num[i], num[j], num[k]});
                }
            }
        }
    }

    return ans;
}

int main() {

    int n;
    cin >> n;

    vector<int> num(n);

    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }

    vector<vector<int>> result = threeSum(num);

    for(int i = 0; i < result.size(); i++) {
        cout << "[ ";
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}