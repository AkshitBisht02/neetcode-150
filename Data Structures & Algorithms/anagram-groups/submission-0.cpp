class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int len=strs.size();
        unordered_map<string,vector<string>> hash;
        for(int i=0;i<len;i++){
            string a=strs[i];
            sort(a.begin(),a.end());
            hash[a].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto a: hash){
            ans.push_back(a.second);
        }
        return ans;

    }
};
