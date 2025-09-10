class Solution {
public:
    int waysToReachStair(int k) {
        //base case
        if(k<0)
          return 0;
        if(k == 0)
          return 1;
        // R.R. 
        int ans = waysToReachStair(k-1)+waysToReachStair(k-2);
        return ans;   

        
    }
};
