class Solution {
public:
    string encode(vector<string>& strs) {
        string ans = "";

        for (auto s : strs) {
            ans += to_string(s.length()) + "#" + s;
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;

        while (i < s.length()) {
            int j = i;

            // Find #
            while (s[j] != '#') {
                j++;
            }

            // Get length
            int len = stoi(s.substr(i, j - i));

            // Move after #
            j++;

            // Extract string of given length
            res.push_back(s.substr(j, len));

            // Move to next encoded string
            i = j + len;
        }

        return res;
    }
};