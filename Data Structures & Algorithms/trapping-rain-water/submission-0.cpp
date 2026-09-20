class Solution {
public:
    int trap(vector<int>& height) {
        int len=height.size();
        if(len==0) return 0;
        
        int l=0,r=len-1;
        int leftMax=height[l],rightMax=height[r];
        int res=0;

        while(l < r){
            if(leftMax < rightMax){
                l++;
                leftMax=max(leftMax,height[l]);
                res+=leftMax - height[l];
            }
            else{
                r--;
                rightMax=max(rightMax,height[r]);
                res+=rightMax - height[r];
            }
        }
        return res;
    }
};
