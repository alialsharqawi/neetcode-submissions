class Solution {
public:
    int scoreOfString(string s) {
        int scoreOfString=0;
        for(int i=0;i<s.size()-1;++i){
            scoreOfString += abs(s[i]-s[i+1]);
        }
        return scoreOfString;
    }
};