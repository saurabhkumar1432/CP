class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        vector<int>s;
        for(int i=0;i<nums.size();i +=2)
        {
            s.assign(nums[i],nums[i+1]);
            ans.insert(ans.end(),s.begin(),s.end());
        }
        return ans;
    }
};
