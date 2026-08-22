class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = -1;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                index++;
                swap(nums[i], nums[index]);
            }
        }
    }
};