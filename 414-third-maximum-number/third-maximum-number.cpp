class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
           st.insert(nums[i]);
        }
        int n=st.size();
        if(n<3){
              auto it = st.rbegin();
              return *it;
        }
        else{
          auto it = st.rbegin();
        it++;
        it++;

        return *it;
        }
    }
};