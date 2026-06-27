#include <iostream>
#include <queue>
using namespace std;

int main() {

    // ==========================
    // Max Heap (Default)
    // ==========================
    priority_queue<int> maxHeap;

    maxHeap.push(20);
    maxHeap.push(50);
    maxHeap.push(10);
    maxHeap.push(40);
    maxHeap.push(30);

    cout << "Max Heap Top: " << maxHeap.top() << endl;
    cout << "Size: " << maxHeap.size() << endl;

    maxHeap.pop();

    cout << "Top after pop: " << maxHeap.top() << endl;

    cout << "Elements: ";

    while(!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }

    cout << endl << endl;

    // ==========================
    // Min Heap
    // ==========================
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(20);
    minHeap.push(50);
    minHeap.push(10);
    minHeap.push(40);
    minHeap.push(30);

    cout << "Min Heap Top: " << minHeap.top() << endl;

    cout << "Elements: ";

    while(!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }

    return 0;
}