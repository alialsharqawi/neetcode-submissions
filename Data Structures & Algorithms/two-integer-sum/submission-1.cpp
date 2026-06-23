class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>to_sums;
        if (nums.empty()) return to_sums;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    to_sums.push_back(i);
                    to_sums.push_back(j);
                    return to_sums;
                }
            }
        }
        return to_sums;
    }
};
