#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

using namespace std;

int minDifferece( vector<int> &arr, int m){
    int n = arr.size();
    sort(arr.begin(),arr.end());

    int min_diff = INT_MAX;
    for(int i = 0; i + m - 1 < n; i++){
        int diff = arr[i + m -1] - arr[i];

        if(diff < min_diff) min_diff = diff;
    }
    return  min_diff;
}

int main(){
    vector<int> arr = {4 ,2,1,7,9,3,5,15,19,90};
    int m = 5;
    cout << "Minimum difference of " << m << " elements is: " << minDifferece(arr, m) << endl;
    return 0;
}