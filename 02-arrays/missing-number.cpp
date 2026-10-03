//268. Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<nums.size();i++) 
            sum+=nums[i];
        return ((n*(n+1)/2) - sum);
    }
};

//2nd approach
int missingNumber(vector<int>& nums){
        vector<bool> check(nums.size()+1);
        for(int i=0;i<nums.size();i++) 
                    check[nums[i]]=true;
        for(int i=0;i<check.size();i++){
                if(check[i]==false) return i;
     }
     return 0;
}