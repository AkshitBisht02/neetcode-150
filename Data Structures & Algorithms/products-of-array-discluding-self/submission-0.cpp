class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size(),prev=1,next=1;
        vector<int> result(len,1);
        for(int i=0;i<len;i++){
            result[i]*=prev;
            prev*=nums[i];
            result[len-i-1]*=next;
            next*=nums[len-i-1];
        }
        return result;
    }
};
