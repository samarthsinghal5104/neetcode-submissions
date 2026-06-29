class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(string s:strs){
            ans+=to_string(s.size());
            ans+='#';
            ans+=s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        for(int i=0;i<s.size();i++){
            string count;
            while(s[i]!='#'){
                count+=s[i];
                i++;
            }
            ans.push_back(s.substr(i+1,stoi(count)));
            i+=stoi(count);
        }
        return ans;
    }
};
