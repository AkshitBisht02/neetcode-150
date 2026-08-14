class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
        unordered_map<int,int> hash;
        for(auto a:nums){
            hash[a]++;
        }

        for(auto a:hash){
            minh.push({a.second,a.first});
            if(minh.size()>k) minh.pop();
        }
        vector<int>result;
        while(!minh.empty()){
            pair r=minh.top();
            minh.pop();
            result.push_back(r.second);
        }
        return result;
    }
};
