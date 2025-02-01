#include <iostream>
using namespace std;

void duplicate(int set[], int n) {  
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  
            if (set[i] == set[j]) {
                cout << set[i] << " is the duplicate element in the set" << endl;
            }
        }
    }
}

int main() {
    int set[] = {1, 2, 3, 4, 5, 2, 3};
    int n = sizeof(set) / sizeof(set[0]);  
    duplicate(set, n);  
    return 0;
}
