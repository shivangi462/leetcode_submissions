class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        int n=logs.size();
        
        vector<string> lett;
        vector<string> digi;
        for(int i=0;i<n;i++){
            string s=logs[i];
            int a=s.size();
            if( s[a-1]=='0' || s[a-1]=='1' || s[a-1]=='2' || s[a-1]=='3' || s[a-1]=='4' || s[a-1]=='5' || 
            s[a-1]=='6' || s[a-1]=='7' || s[a-1]=='8' || s[a-1]=='9' ){ 
              digi.push_back(s);
              // cout<<s;
            }
            else lett.push_back(s);
        }
         
        sort(lett.begin(), lett.end(), [](const string &log1, const string &log2) {
            int l1Idx = log1.find(' ');
            int l2Idx = log2.find(' ');
            string lc1 = log1.substr(l1Idx + 1);
            string lc2 = log2.substr(l2Idx + 1);
            return lc1 == lc2 ? log1 < log2 : lc1 < lc2;
        });

        lett.insert(lett.end(), digi.begin(), digi.end());
        return lett;
    }
};