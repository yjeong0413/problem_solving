class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        sort(nums.begin(), nums.end());
        int numsLength = nums.size();
        
        for (int i = 0; i < numsLength-1; i++) {
            int j=i+1;
            if (j < numsLength & nums[i]==nums[j]) {
                flag = true;
                break;
            } // if
        }  // for-i
        
        return flag;
    }  // containsDuplicate
};
