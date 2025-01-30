#include <iostream>
using namespace std;

int factorial(int number){
    if(number < 0){
        cout << "Factorial of a negative number doesn't exist" <<endl;
        return 0;
    }
    if(number > 1){
        return number * factorial(number - 1);
    }
}
int main(){
    int num , fact=1;
    cout << "Enter a number" <<endl;
    cin >> num;
    if(num == 1){
        cout << "Factorial of 1 is 1" << endl;
    }
    else{
        fact = factorial(num);
        cout << "Factorial of " << num << " is " << fact << endl;
    }
    return 0;
    }