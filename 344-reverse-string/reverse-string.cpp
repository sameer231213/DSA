class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        vector<char> ch;
        
        for (int i = n - 1; i >= 0; i--) {
            ch.push_back(s[i]);
        }
        
        s = ch;
    }
};