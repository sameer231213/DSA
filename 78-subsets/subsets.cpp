
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans = {{}};

        for (int x:nums){
            int n=ans.size();
            for (int i=0;i<n;i++) {
                vector<int>temp=ans[i];
                temp.push_back(x);
                ans.push_back(temp);
            }
        }

        return ans;
    }
};
