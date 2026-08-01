class Solution {
public:
    int mySqrt(int x) {
        if(x==1 || x==0) return x;

        int strt=1,end=x;
      
       while(strt<=end){
         int m=strt+(end-strt)/2;
        if(m>x/m) end=m-1;
           else if(m<x/m) strt=m+1;
           else return m;
       }
       return end;
       

    }
};