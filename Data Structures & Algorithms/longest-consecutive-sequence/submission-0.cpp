class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(auto n:nums) hash[n]++;
        vector<int>start;
        for(auto n:nums){
            if(hash[n-1]==0){
                start.push_back(n);
            }
        }
        int ans=0;
        for(int s:start){
            int count=0;
            while(hash[s]!=0){
                count++;
                s++;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};
