
class Solution {
public:
    int climbStairs(int n) {
        
        if(n<2)
            return 1;
        
        int prev2 = 1;
        int prev = 1;
        
        for(int i=2; i<=n; i++)
        {
            int curi = prev + prev2;
            prev2 = prev;
            prev = curi;
        }
        return prev;
    }
};