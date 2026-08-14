class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> v;
        // Remove consecutive duplicates
        for (int x : nums) {
            if (v.empty() || v.back() != x) {
                v.push_back(x);
            }
        }
        int ans = 0;
        // Check hill or valley
        for (int i = 1; i < v.size() - 1; i++) {
            if ((v[i] > v[i-1] && v[i] > v[i+1]) ||
                (v[i] < v[i-1] && v[i] < v[i+1])) {
                ans++;
            }
        }
        return ans;
    }
};