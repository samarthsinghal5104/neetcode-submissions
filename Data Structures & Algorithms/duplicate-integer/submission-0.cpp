class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(auto n:nums){
            if(hash[n]!=0){
                return true;
            }
            hash[n]++;
        }
        return false;
    }
};