class KthLargest {
private:
    int b;
    priority_queue<int,vector<int>,greater<int>> minh;
public:
    KthLargest(int k, vector<int>& nums) {
        b=k;
        for(auto a:nums){
            minh.push(a);
            if(minh.size()>k) minh.pop();
        }
    }
    
    int add(int val) {
        minh.push(val);
        if(minh.size()>b){
            minh.pop();
        }
        return minh.top();
    }
};
