class MinStack {
public:
    vector<int>arr;
    vector<int>minarr;
    MinStack() {
    }
    
    void push(int val) {
        if(arr.size()==0){
            minarr.push_back(val);
        } else {
            minarr.push_back(min(minarr[minarr.size()-1],val));
        }
        arr.push_back(val);
    }
    
    void pop() {
        arr.pop_back();
        minarr.pop_back();
    }
    
    int top() {
        return arr[arr.size()-1];
    }
    
    int getMin() {
        return minarr[arr.size()-1];
    }
};
