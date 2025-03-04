#include<iostream>
using namespace std;

bool powerOfThree(int n){
    if( n == 0 ) return false;
    while( n > 0){
        int digit = n % 3;
        if(digit > 1) return false;
        n /= 3;
    }
    return true;
}

int main(){
    int num;
    cin >> num;
    powerOfThree(num);
}