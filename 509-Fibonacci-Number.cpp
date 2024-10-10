class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int prev1 = 0;
        int prev2 = 1;
        int fibNum = 0;
        
        for(int i=2; i<=n; i++){
            fibNum = prev1 + prev2;
            prev1 = prev2;
            prev2 = fibNum;
        }
        return fibNum;
    } 
};
