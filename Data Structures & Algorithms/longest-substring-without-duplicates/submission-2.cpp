class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=1;
        int n=s.size();
        if(n==0)    return 0;
        unordered_map<char,int>hash;
        int i=0,j=0;
        hash[s[i]]=i+1;
        for(int k=1;k<n;k++){
            if(hash[s[k]]==0){
                j=k;
                hash[s[k]]=k+1;
                ans=max(ans,k-i+1);
            } else {
                if(hash[s[k]] > i){
                    i=hash[s[k]];
                }
                hash[s[k]]=k+1;
                ans=max(ans,k-i+1);
            }
            cout<<j<<" "<<i<<" "<<ans<<endl;
        }
        return ans;
    }
};
