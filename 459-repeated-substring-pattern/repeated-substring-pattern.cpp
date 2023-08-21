class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        string dup_s=str+str;
        dup_s.erase(0,1);
        dup_s.erase(dup_s.size()-1,1);

        return dup_s.find(str)!=string::npos?true:false;
        
        
    }
};