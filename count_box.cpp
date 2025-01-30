#include<iostream>
using namespace std;

int main(){
    int rows = 0, cols = 0,num=1;
    cout << "enter the number of rows and columns"<< endl;
    cin >> rows >> cols;
    for(int i = 0 ; i < rows ; i++){
        for (int j = 0; j < cols; j++){
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}