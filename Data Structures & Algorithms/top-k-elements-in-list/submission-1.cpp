class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        for(auto n:nums){
            hash[n]++;
        }
        priority_queue<pair<int,vector<int>>>q;
        unordered_map<int,vector<int>>p;
        for(auto h:hash){
            p[h.second].push_back(h.first);
        }
        for(auto x:p){
            q.push({x.first,x.second});
        }
        vector<int>ans;
        pair<int,vector<int>>top;
        while(!q.empty() && k!=0){
            top=q.top();
            for(auto x:top.second){
                ans.push_back(x);
                k--;
                if(k==0){
                    break;
                }
            }
            q.pop();
        }
        return ans;
    }
};
