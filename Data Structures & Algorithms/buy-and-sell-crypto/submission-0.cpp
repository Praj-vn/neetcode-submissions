class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxp=0;
        for(int i=0;i<prices.size();i++){
            int diff=prices[i]-mini;
            mini=min(mini,prices[i]);
            maxp=max(maxp,diff);
        }
        return maxp;
    }
};
