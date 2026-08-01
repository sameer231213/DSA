class Solution {
public:
    int mySqrt(int x) {
        if(x==1 || x==0) return x;

    long long l=1;
    long long r=x;
    int ans=0;
    while(l<=r){
        long long mid=l+(r-l)/2;
        if(mid*mid==x){
             return mid;
        }
        else if(mid*mid<x){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return ans;
    }
};