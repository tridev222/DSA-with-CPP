#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen; 
    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return true; 
        }
        seen.insert(num);
    }
    return false; 
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    cout << (containsDuplicate(nums) ? "true" : "false") << endl;

    nums = {1, 2, 3, 4};
    cout << (containsDuplicate(nums) ? "true" : "false") << endl;

    nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << (containsDuplicate(nums) ? "true" : "false") << endl;

    return 0;
}
