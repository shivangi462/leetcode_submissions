class Solution {
public:
    int bestClosingTime(string customers) {
        int mincnt=0,curmin=0,hour=0;

        for(int i=0;i<customers.size();i++){
             char ch=customers[i];

             if(ch=='Y') curmin--;
             else curmin++;


             if(curmin<mincnt){
               hour=i+1;
               mincnt=curmin;
             }
        }

        return hour;
        
        
        
           
    
    }
};