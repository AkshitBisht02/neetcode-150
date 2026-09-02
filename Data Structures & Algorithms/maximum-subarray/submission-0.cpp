class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0],ans=nums[0];
        int len=nums.size();
        for(int i=1;i<len;i++){
            if(nums[i]>sum+nums[i]){
                sum=nums[i];
            }
            else sum+=nums[i];
            ans=max(sum,ans);
        }
        return ans;
    }
};
