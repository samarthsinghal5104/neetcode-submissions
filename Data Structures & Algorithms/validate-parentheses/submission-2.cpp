class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>hash;
        stack<char>st;
        hash[')']='(';
        hash['}']='{';
        hash[']']='[';
        for(auto c:s){
            if(hash.count(c) > 0){
                if(!st.empty() && st.top()==hash[c]){
                    st.pop();
                } else {
                    return false;
                }   
            } else {
                st.push(c);
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};
