class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>hash;
        for(string s:strs){
            vector<int>freq(26,0);
            for(char c:s){
                freq[c-'a']++;
            }
            string str;
            for(int i=0;i<26;i++){
                if (freq[i] > 0) { 
                    str += 'a' + i;
                    str += '0' + freq[i];
                }
            }
            hash[str].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto h:hash){
            ans.push_back(h.second);
        }
        return ans;
    }
};
