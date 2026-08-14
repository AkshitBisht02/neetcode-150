class Solution {
public:
    int maxArea(vector<int>& heights) {
        int len=heights.size();
        int i=0,j=len-1;
        int area=0;
        while(i<j){
            int h=min(heights[i],heights[j]);
            int b=j-i;
            area=max(area,h*b);
            (heights[i]>heights[j]) ? j--:i++;
        }
        return area;
    }
};
