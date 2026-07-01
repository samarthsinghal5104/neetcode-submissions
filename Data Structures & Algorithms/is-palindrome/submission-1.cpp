class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char c:s){
            if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
                str+=(char)tolower(c);
            } else if(c>='0'&&c<='9'){
                str+=c;
            }
        }
        int i=0,j=str.size()-1;
        while(i<=j){
            if(str[i++]!=str[j--]){
                return false;
            }
        }
        return true;
    }
};
