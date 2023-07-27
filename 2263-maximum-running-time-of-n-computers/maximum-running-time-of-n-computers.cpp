class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum=0;
        int size=batteries.size();
        for(int i=0;i<size;i++){
          sum+=batteries[i];
        }

        long long left=1;
        long long right=sum/n;

        while(left<right){
          long long target=right-(right-left)/2;
          long long extra=0;
          
          for (int power : batteries)
                extra =extra + min((long long)power, target);

            if (extra >= (long)(n * target))
                left = target;
            else
                right = target - 1;
        }
         return left;
    }
};