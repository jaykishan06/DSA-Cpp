#include <iostream>
using namespace std;

int main() {
    float totalMarks, obtainedMarks;
    cin >> totalMarks >> obtainedMarks;

    double percentage = (obtainedMarks / totalMarks) * 100;
    cout << percentage << endl;

    return 0;
}