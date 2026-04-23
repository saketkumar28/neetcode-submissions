class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ansi=INT_MIN;
        int sum=0;
        for (int i=0;i<n;i++){
            if (sum<0){
                sum=0;
            }
        sum=sum+nums[i];
        ansi=max(ansi,sum);
        }
        return ansi;
    }
};
