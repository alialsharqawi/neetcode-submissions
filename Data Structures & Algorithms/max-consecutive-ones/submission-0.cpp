class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,temp=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0 ){
                if(temp <count){
                    temp = count;
                }
                count =0;
            }else{
                count++;
            }
            
        }
        return max(temp,count);
    }
};