class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(const string&s:strs){
            int i=0;
            for(;i<s.size()&&i<prefix.size();++i){
                if(s[i] != prefix[i]){
                    break;
                }
            }
            if (i==0)return "";
            prefix = prefix.substr(0, i);
        }
        return prefix;

    }
};