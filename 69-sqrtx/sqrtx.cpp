class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;
        int ans=0;
        for(long long i=1;i<x;i++){
            if(i*i<=x)
                ans=i;
                else
                break;
                
        }
        return ans;

    }
};