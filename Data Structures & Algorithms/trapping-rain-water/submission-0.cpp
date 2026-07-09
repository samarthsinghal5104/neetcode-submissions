class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>a=height;
        vector<int>b=height;
        int n=height.size();
        for(int i=1;i<n;i++){
            a[i]=max(a[i],a[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            b[i]=max(b[i],b[i+1]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(a[i],b[i])-height[i];
        }
        return ans;
    }
};
