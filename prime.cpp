#include <iostream>
using namespace std;

bool prime(int num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "enter a number to be tested for prime number" << endl;
    cin >> num;
    if (prime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is NOT a prime number." << endl;
    return 0;
}
