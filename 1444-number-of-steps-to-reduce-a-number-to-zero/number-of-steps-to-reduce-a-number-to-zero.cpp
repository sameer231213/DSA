class Solution {
public:
    int numberOfSteps(int num) {
        int n=num;
         int cnt=0;
        while(n!=0){
            if(n%2==0){
                n/=2;
                cnt++;
            }
            else{
                n=n-1;
                cnt++;
            }
        }
        return cnt;
    }
};