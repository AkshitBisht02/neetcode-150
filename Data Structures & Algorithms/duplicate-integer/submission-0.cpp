class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        int len=nums.size();
        for(int i=0;i<len;i++){
            if(hash.find(nums[i])!=hash.end()) return true;
            hash[nums[i]]++;
        }
        return false;
    }
};