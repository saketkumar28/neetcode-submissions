class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int,int>>v;
        vector<int>ans;
        map<int,int>mpp;
        for (int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for (auto it :mpp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),[](auto &a, auto &b) {
           return a.first > b.first;
        });
        int i=0;
        while(k>0){
            ans.push_back(v[i].second);
            k--;
            i++;
        }
        return ans;

    }
};
