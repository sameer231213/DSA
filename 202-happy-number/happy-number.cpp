class Solution {
public:
    bool isHappy(int n) {
 
     while(n!=1 && n!=4){
        long long sum = 0;
     while (n>0) {
        long long digit = n % 10;
        sum += digit * digit;
        n /= 10;
     }
          n=sum;
    }
    return n ==1;
    }
};