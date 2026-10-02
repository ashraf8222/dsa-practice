//485. Max Consecutive Ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums){
        int streak=0,maxStreak=0;
        for(int i=0;i<nums.size();i++){
              if(nums[i]==1){   
                     int j=i+1;
                     streak++;
                   while(j<nums.size()&&nums[j]){
                       streak++;
                         j++;
                }
                   i=j;
    }
      if(streak>maxStreak)  maxStreak=streak;
        streak=0;
}
       return maxStreak;
}
};