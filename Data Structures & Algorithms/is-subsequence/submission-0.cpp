class Solution {
public:
    bool isSubsequence(string s, string t) {
        int binary=0;
        for(int i=0,j=0; i<t.size() && j<s.size();){
            if(s[j]==t[i]){
                i++;
                j++;
                binary++;
            }else{
                i++;
            }
        }
        return binary == s.size();
    }
};