// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
class Solution {
public:
    int countOdds(int low, int high) {
        int start =low;
        int end=high;
        int count=0;
        if (low%2==0){
            start=low+1;
            
        }
        if(high%2==0){
            end=high-1;
        }
        
        for(int i=low;i<=end;i+=2){
            count++;
        }
        return count;
        
    }
};