class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int max=0;
        while(l<r){
            long long MIN=min(height[l],height[r]);
            int area=MIN*(r-l);
          if (area > max)
                max = area;

            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return max;
    }
};