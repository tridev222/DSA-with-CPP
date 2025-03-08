#include <iostream>
using namespace std;

int minRecolors(string blocks, int k) {
    int n = blocks.size();
    int whiteCount = 0, minOperations = INT_MAX;

    // Count the number of white blocks in the first window of size k
    for (int i = 0; i < k; i++) {
        if (blocks[i] == 'W') whiteCount++;
    }
    minOperations = whiteCount;

    // Slide the window across the string
    for (int i = k; i < n; i++) {
        if (blocks[i - k] == 'W') whiteCount--;  // Remove leftmost element
        if (blocks[i] == 'W') whiteCount++;      // Add new element
        minOperations = min(minOperations, whiteCount);
    }

    return minOperations;
}

int main() {
    string blocks = "WBBWWBBWBW";
    int k = 7;
    cout << "Minimum recolors needed: " << minRecolors(blocks, k) << endl;
    return 0;
}
