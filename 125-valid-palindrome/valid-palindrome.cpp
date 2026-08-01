class Solution {
public:
    bool isPalindrome(string s) {
         string ans = "";
        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])){
                ans += s[i];
            }
        }
       for(int i = 0; i < ans.size(); i++) {
          ans[i]=tolower(ans[i]);
}
     string rev="";
     for(int i=ans.size()-1;i>=0;i--){
        rev.push_back(ans[i]);
     }
     return ans==rev;
    }
};