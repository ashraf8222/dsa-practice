//1672. Richest Customer Wealth
int maximumWealth(vector<vector<int>>& accounts){
      int max=0;
      for(int i=0;i<accounts.size();i++){
                 int samp=0;
            for(int j=0;j<accounts[i].size();j++){
                    samp+=accounts[i][j];
}
           if(max<samp) max=samp;
}
       return max;
}