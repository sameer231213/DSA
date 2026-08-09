class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        for(int x:nums){
            if(freq[x]>nums.size()/2){
 return x;
            }
        }
       return -1;
    }
};