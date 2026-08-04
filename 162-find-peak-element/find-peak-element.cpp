class Solution {
public:
    int findPeakElement(vector<int>& nums) {
          int n=nums.size();
          vector<int> temp=nums;
           sort(temp.begin(),temp.end());
    int ans=temp[n-1];
    for(int i=0;i<n;i++){
        if(nums[i]==ans){
            return i;
        }
    }
            return -1; 
    }
};