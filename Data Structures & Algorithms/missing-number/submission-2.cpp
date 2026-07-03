class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int hash[1001]={0};
        int n=nums.size();
        for (int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        int ans;
        for (int i=0;i<1001;i++){
            if (hash[i]==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
