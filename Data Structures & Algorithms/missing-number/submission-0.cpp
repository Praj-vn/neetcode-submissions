class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int orignal_xor = 0;
        for(int i=1;i<=nums.size();i++){
            orignal_xor = orignal_xor ^ i;
        }
        for(int i=0;i<nums.size();i++){
            orignal_xor = orignal_xor ^ nums[i];
        }
        return orignal_xor;
    }
};
