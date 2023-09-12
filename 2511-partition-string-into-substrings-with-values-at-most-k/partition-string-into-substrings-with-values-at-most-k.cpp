#define ll long long 
class Solution {
public:
    int minimumPartition(string s, int k) {
       int partition=0;
       string temp="";
       int size=s.size();
       for(int i=0;i<size;i++){
            temp+=s[i];

            ll val=stoll(temp);

            if(val<=k) {// do nothing
            }
            else{
              partition++;
              temp=s[i];

              if(s[i]-'0' > k) return -1;
            }
       }

       if(temp!=""){
            ll val=stoll(temp);

            if(val<=k) partition++;
            else return -1; 
       }
       return partition;
    }
};