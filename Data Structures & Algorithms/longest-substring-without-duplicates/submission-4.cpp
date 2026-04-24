class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0;
        int j=0;
        map<int,int>mpp;
        int ansi=0;
        while(j<n){
           mpp[s[j]]++;
           while((j-i+1)>mpp.size()){
            mpp[s[i]]--;
            if (mpp[s[i]]==0){
                mpp.erase(s[i]);
            }
            i++;
           }
           ansi=max(ansi,j-i+1);
           j++;
            
        }
        return ansi;
    }
};
