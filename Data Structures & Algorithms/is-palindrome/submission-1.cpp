class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string sat="";
        for (int i=0;i<n;i++){
            if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9') ){
                char temp=tolower(s[i]);
               sat.push_back(temp);
            }
            else{
           continue;
            }
        }
        int k=sat.size();
        for (int i=0;i<=k/2;i++){
            if (sat[i]!=sat[k-i-1]){
              return false;
            }
        }
        return true;
    }
};
