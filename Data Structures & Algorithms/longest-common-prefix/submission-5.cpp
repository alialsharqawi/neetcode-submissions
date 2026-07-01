class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        // ترتيب الكلمات أبجدياً
        sort(strs.begin(), strs.end());
        
        string first = strs[0];
        string last = strs.back();
        string result = "";
        
        // مقارنة أول كلمة بآخر كلمة فقط!
        for (int i = 0; i < first.size(); ++i) {
            if (first[i] == last[i]) {
                result += first[i];
            } else {
                break;
            }
        }
        return result;
    }
};
