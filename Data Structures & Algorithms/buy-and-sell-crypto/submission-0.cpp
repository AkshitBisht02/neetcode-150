class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=prices[0];
        int profit=0;
        for(auto b : prices){
            if(b<a) a=b;
            profit=max(profit,b-a);
        }
        return profit;
    }
};
