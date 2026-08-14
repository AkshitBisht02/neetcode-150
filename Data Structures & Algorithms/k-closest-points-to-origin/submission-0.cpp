class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int len=points.size();
        priority_queue<pair<int,vector<int> >> maxh;
        for(auto a: points){
            int b=a[0]*a[0] + a[1]*a[1];
            maxh.push({b,a});

            if(maxh.size()>k) maxh.pop();
        }
        vector<vector<int>> res;
        while(!maxh.empty()){
            pair g=maxh.top();
            maxh.pop();
            auto c=g.second;
            res.push_back(c);
        }
        return res;
    }
};
