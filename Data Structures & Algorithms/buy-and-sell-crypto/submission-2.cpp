class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int i=0;int j=1;
        while(j<prices.size()){
            if(prices[i]>=prices[j]){
              i=j;
              j++;
            }
            else if(prices[i]<prices[j]){
                maxp=max(maxp,abs(prices[j]-prices[i]));
                j++;
            }
        }
        return maxp;
    }
};
