class Solution {
    public:
        int hammingWeight(int n) {
            bitset<31> num(n);
            return num.count();
        }
    };