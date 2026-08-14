class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,len=s.length(),res=0;
        unordered_map<char,int>  hash;
        for(int right=0;right<len;right++){
            hash[s[right]]++;
            if(hash[s[right]]>1){
                while(hash[s[right]]>1){
                    hash[s[left]]--;
                    left++;
                }
            }
            res=max(res,right-left+1);
        }
        return res;
    }
};
