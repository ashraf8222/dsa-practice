//121. Best Time to Buy and Sell Stock
int maxProfit(vector<int>& prices){
int profit=0;

for(int i=0;i<prices.size();i++){  
    int buy=prices[i];  

    for(int j=i+1;j<prices.size();j++){  
        if(prices[j]>buy && (profit<prices[j]-buy))  
            profit=prices[j]-buy;  
    }  
}  

  return profit;
}

//2nd Approach
int maxProfit(vector& prices){ 
    int profit=0,buy=prices[0];

    for(int i=1;i<prices.size();i++){
        if(buy>prices[i]) buy=prices[i]; 
           else if(profit<prices[i]-buy)
             profit=prices[i]-buy;
    }

  return profit;
}