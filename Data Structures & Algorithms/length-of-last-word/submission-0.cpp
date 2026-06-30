class Solution {
public:
    int lengthOfLastWord(string s) {
        short length=0,temp=0;
        if(s==" ") return 0;
        for(short i=0;i<s.size()+1;++i){
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