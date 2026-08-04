class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int min=nums[0];
     int max=nums[nums.size()-1];
     vector<int>ans;
     for(int i=min;i<max;i++){
        ans.push_back(i);
     }
    
    for(int x:nums){
        for(int i=0;i<ans.size();i++){
            if(ans[i]==x){
                ans[i]=-1;
            }
        }
    }
vector<int>res;
for(int i=0;i<ans.size();i++){
    if(ans[i]!=-1){
        res.push_back(ans[i]);
    }
}
return res;
      
    }
};