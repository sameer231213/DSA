class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        for(int x : nums) {
            freq[x]++;
        }
        vector<int> ans;
        while(k > 0) {
            int maxFreq = 0;
            int element = 0;
            for(auto x : freq) {
                if(x.second > maxFreq) {
                    maxFreq = x.second;
                    element = x.first;
                }
            }
            ans.push_back(element);
            freq.erase(element);
            k--;
        }
        return ans;
    }
};