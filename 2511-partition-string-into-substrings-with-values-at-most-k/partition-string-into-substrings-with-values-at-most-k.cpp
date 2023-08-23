#define ll long long 
class Solution {
public:
    int minimumPartition(string s, int k) {
        string temp=""; ll cnt=0; 
 
    for(int i=0; i<s.size(); i++) 
    {
        temp+=s[i];
 
        ll val = stoll(temp);
 
        if(val<=k) 
        {
            // do nothing
        }
        else
        {
            cnt++;
            temp=s[i]; 
 
            if((s[i]-'0')>k) {
               return -1;
            }
        }
    }
 
    if(temp!="") 
    {
         ll val = stoll(temp);
 
         if(val<=k) 
        {
           cnt++;
        }
        else
        {
           return -1;  
        }
    }
 
      return cnt;
    }
};