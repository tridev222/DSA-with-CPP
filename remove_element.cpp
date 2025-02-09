#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i = 0; 
    for (int j = 0; j < nums.size(); j++) { 
        if (nums[j] != val) { 
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

int main() {
    int n, val;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    cout << "Enter value to remove: ";
    cin >> val;

    int k = removeElement(nums, val);

    
    sort(nums.begin(), nums.begin() + k);

    cout << "New Length: " << k << endl;
    cout << "Updated Array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
