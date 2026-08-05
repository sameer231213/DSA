class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
       int totalsum=0;
        for(int i=1;i<=n;i++){
            totalsum+=i;
        }
        int sum=0;
         for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return totalsum-sum;
    }
};