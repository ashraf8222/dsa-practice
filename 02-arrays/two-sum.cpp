//1. Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int first,second,i,j;
        for(i=0;i<nums.size();i++){
            int find;
            find=target-nums[i];
            for(j=i+1;j<nums.size();j++){
                if(nums[j]==find){
                first=i; 
                second=j;
              }
            }
        }
        return {first,second};
    }
};
