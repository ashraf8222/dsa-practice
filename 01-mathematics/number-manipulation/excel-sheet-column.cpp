//171. Excel Sheet Column Number
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0,unit=0;
        for(auto ch=columnTitle.rbegin();ch!=columnTitle.rend(); ++ch){
            ans+=((*ch-64)*(power(unit)));
            unit++;
        }
        return ans;
    }
    int power(int unit){
         int value=1;
        for(int i=0;i<unit;i++)
          value*=26;
        return value;
    }
};