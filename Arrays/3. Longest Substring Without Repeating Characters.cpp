class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), maxLen = 0, start = 0;
        unordered_map<char, int> m;
        for(int i = 0; i < n; i++) {
            if(m.count(s[i]) && m[s[i]] >= start) {
                start = m[s[i]] + 1;
            }
            m[s[i]] = i;
            maxLen = max(maxLen, i - start + 1);
        }
        return maxLen;
    }
};
