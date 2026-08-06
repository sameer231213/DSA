class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int f=0;
        for(int i=0;i<n;i++){
            if(i>f){
                return false;
            }
            f=max(f,i+nums[i]);
        }
        return true;
    }
};