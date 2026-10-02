//1295. Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums){
            int n=0;
          for(int i=0;i<nums.size();i++){
              int count=getDigitCount(nums[i]);
                 if(count%2==0)  n+=1;
}
     return n;
}
int getDigitCount(int n){
       int ans=0;
       while(n){
         n/=10;
         ans++;
}
   return ans;
}
};