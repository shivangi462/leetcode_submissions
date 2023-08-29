class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        set<long long> st;
        long long sum=0;
        long long i=1;
        while(n){
            if(st.find(i)==st.end()){
                sum+=i;
                st.insert((long long)(target-i));
                n--;
            }
            i++;
            // cout<<i<<endl;
        }
        return sum;
    }
};