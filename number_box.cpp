#include <iostream>
using namespace std;

int main(){
    int rows = 0, cols = 0;
    cout << " enter number of rows and columns" << endl;
    cin >> rows >> cols;
    for(int i = 1; i <= rows; i++){
        for( int j = 0; j < cols; j++){
            cout << i << " " ;
        }
        cout << endl;
    }
    return 0;
}