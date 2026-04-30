#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;

    if (day >= 1 && day <= 5) cout << "Weekday";
    else if (day == 6 || day == 7) cout << "Weekend";
    else cout << "Invalid";

    return 0;
}