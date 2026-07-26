class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans3 = nums[n-1]*nums[n-2]*nums[n-3]; 
        int ans = nums[n-1];
       vector<int>nums2(n);
        for(int i=0;i<n;i++){
            nums[i]*=-1;
             nums2.push_back(nums[i]);

        }
        sort(nums2.begin(),nums2.end());
        int n2 = nums2.size();
        return max(nums2[n2-1]*nums2[n2-2]*ans,ans3);
   
    }
};