class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc=true;
        bool des=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i])
                des=false;
        
            if(nums[i-1]>nums[i])
                inc=false;
            
        }
        return inc||des;
    }
};