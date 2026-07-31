class Solution {
public:
    bool isHappy(int n) {
 
     long long cnt=0;
     long long MAX=1000;
     while(n!=1 && cnt<MAX){
        long long sum = 0;
     while (n>0) {
        long long digit = n % 10;
        sum += digit * digit;
        n /= 10;
     }
          n=sum;
          cnt++;
    }
    return n ==1;
    }
};