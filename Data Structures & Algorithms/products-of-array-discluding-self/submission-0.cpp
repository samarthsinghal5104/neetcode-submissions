class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {  
        vector<int>a=nums;
        vector<int>b=nums;
        int n=nums.size();
        vector<int>ans(n,0);
        for(int i=1;i<n;i++){
            a[i]*=a[i-1];
            b[n-i-1]*=b[n-i];
        }
        for(int i=0;i<n;i++){
            if(i==0){
                ans[i]=b[1];
            } else if(i==n-1){
                ans[i]=a[n-2];
            } else {
                ans[i]=a[i-1]*b[i+1];
            }
        }
        return ans;
    }
};
