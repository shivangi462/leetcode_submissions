class Solution {
public:
   
    int singleNonDuplicate(vector<int>& nums) {
        
        // int sum=0;
        // for(int i=0;i<nums.size();i++){
        //   sum^=nums[i];
        // }
        // return sum;

        // 1 1 2 3 3 4 4 8 8
        // 0 1 2 3 4 5 6 7 8

        //[3,3,7,7,10,11,11]
        // 0 1 2 3 4  5   6

        // l=0 r=8 mid=4   4 is even mtlb ki single element occurence ke baad 
        //                 ka pattern(nums[i]==nums[i+1] iska true hona mtlb ki  
        //                 answer left me hai )toh l=mid+1;
        //                 wrna r=mid;    yha cond false hai isliye r=mid;

        // l=0 r=4 mid=2   2 is even mtlb ki single element occurence ke baad 
        //                 ka pattern(nums[i]==nums[i+1] iska true hona mtlb ki  
        //                 answer left me hai )toh l=mid+1;
        //                 wrna r=mid;    yha cond false hai isliye r=mid;            

        // l=0 r=2 mid=1   1 is odd mtlb ki single element occurence ke phle 
        //                 ka pattern(nums[i]==nums[i-1] iska true hona mtlb ki  
        //                 answer right me hai )toh l=mid+1;
        //                 wrna r=mid;     yha cond true hai isliye l=mid+1;
        // l=2 r=2 jb l==r barabar hogye toh whi hamara answer hai     




        int n=nums.size();
        int l=0,r=n-1;

        while(l<r){

          int mid=(l+r)/2;

          if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid%2==1 && nums[mid]==nums[mid-1])){
            l=mid+1;
          }
          else{
            r=mid;
          }
        } 
        return nums[l];          
    }
};