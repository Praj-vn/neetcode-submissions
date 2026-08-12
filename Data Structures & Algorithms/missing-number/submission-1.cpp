class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int orignal_xor = nums.size();
        for(int i=0;i<nums.size();i++){
            orignal_xor = orignal_xor ^ i;
            orignal_xor = orignal_xor ^ nums[i];
        }
        return orignal_xor;
    }
};
