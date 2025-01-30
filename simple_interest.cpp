#include <iostream>
using namespace std;

int main() {
    int p,r,t,simple_interest;
    cout << "enter priciple amount..." <<endl;
    cin >> p;
    cout << "enter rate of interest..." << endl;
    cin >> r;
    cout << "enter time in years..." << endl;
    cin >> t;
    simple_interest = (p * r * t) / 100;
    cout << "Simple Interest is: " << simple_interest << endl;
    return 0;
}
