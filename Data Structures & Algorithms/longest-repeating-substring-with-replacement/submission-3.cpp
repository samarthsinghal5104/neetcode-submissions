class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> cnt;
        int i = 0, maxCount = 0, ans = 0;
        for (int j = 0; j < (int)s.size(); j++) {
            cnt[s[j]]++;
            maxCount = max(maxCount, cnt[s[j]]);
            if (j - i + 1 - maxCount > k) {
                cnt[s[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};
