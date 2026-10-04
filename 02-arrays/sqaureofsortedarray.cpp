//977. Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums){
          vector<int> ans(nums.size());
          for(int i=0;i<nums.size();i++)
              ans[i]=nums[i]*nums[i];
           sort(ans.begin(),ans.end());
            return ans;
    }
};

//optimal approach is to solve with two pointer 