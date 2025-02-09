#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water_hold = 0;
        int i = 0, j = height.size() - 1; 

        while (i < j) {
            int small = min(height[i], height[j]); 
            int distance = j - i;
            int area = small * distance;
            max_water_hold = max(max_water_hold, area);

            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return max_water_hold;
    }
};

int main() {
    Solution sol;
    vector<int> height = {1,8,6,2,5,4,8,3,7}; 
    cout << "Maximum Water Hold: " << sol.maxArea(height) << endl;
    return 0;
}
