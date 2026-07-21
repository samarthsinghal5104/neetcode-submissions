class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto t:tokens){
            if(t=="+"||t=="-"||t=="/"||t=="*"){
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                int ans;
                if(t=="+")  ans=a+b;
                else if(t=="-")  ans=a-b;
                else if(t=="/")  ans=a/b;
                else if(t=="*")  ans=a*b;
                st.push(ans);
            } else {
                st.push(stoi(t));
            }
        }
        return st.top();
    }
};
