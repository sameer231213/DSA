class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      
        vector<int>merge;
        for(int x:nums1){
            merge.push_back(x);
        }
        for(int x:nums2){
            merge.push_back(x);
        } 
        sort(merge.begin(),merge.end());
       int m=merge.size();
        if(m%2==1){
            return merge[m/2];
        }
        else{
            return (merge[m / 2-1]+merge[m/2])/2.0;
        }
    }
};