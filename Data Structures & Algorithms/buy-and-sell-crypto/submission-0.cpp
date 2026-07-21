class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int bInd=0;
        int sInd=0;
        int profit=0;
        for(int i=1;i<n;i++){
            if(prices[i]<prices[bInd]){
                bInd=i;
            }
            if(prices[i]>prices[bInd]){
                sInd=i;
            }
            if(sInd>bInd){
                profit=max(profit, prices[sInd]-prices[bInd]);
                cout<<prices[sInd]<<" "<<prices[bInd]<<" "<<profit<<endl;
            }
        }
        return profit;
    }
};
