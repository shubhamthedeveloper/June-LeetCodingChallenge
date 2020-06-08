class Solution {
public:
    int change(int amount, vector<int>& coins) {
        if (amount == 0)
            return 1;
        
        if (coins.size() == 0)
            return 0;
        vector<int> dp(amount+1,0);
        
        dp[0] = 1;
        for(int c:coins){
            cout << c << " ";
            for(int i=c;i<=amount;i++){
                dp[i] += dp[i-c];
            }
        }
        cout << endl;
        for_each(begin(dp),end(dp),[](int c){cout << c <<" ";});
        return dp[amount];
            
    }
};