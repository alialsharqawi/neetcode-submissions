class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0,temp=0;
        for(int i=0;i<s.size()+1;++i){
            if(s[i]==' ' || s[i]=='\0'){
                if(length != 0){
                    temp=length;
                }
                length=0;
            }else{
                length++;
            }
        }
        return temp;
    }
};