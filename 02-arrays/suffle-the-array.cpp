//1470. Shuffle the Array
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x(n),y(n),ans(n*2);
        for(int i=0;i<n;i++) x[i]=nums[i];
        for(int i=n,j=0;i<nums.size();i++){
            y[j]=nums[i];
            j++;
        }
        for(int i=0,j=0;i<nums.size();i++){
            ans[i]=x[j];
            i++;
            ans[i]=y[j];
            j++;
        }
        return ans;
    }
};