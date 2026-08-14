class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxh;

        for (auto a : stones) {
            maxh.push(a);
        }

        while (maxh.size() > 1) {
            int a = maxh.top();
            maxh.pop();

            int b = maxh.top();
            maxh.pop();

            if (a != b) {
                maxh.push(a - b);
            }
        }

        if (maxh.empty()) return 0;

        return maxh.top();
    }
};