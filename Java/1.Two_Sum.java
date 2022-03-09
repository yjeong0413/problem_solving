class Solution {
public:
    int[] twoSum(int[] nums, int target) {
        int[] indices = new int[2];
        boolean stop = false;
        int arraylength = nums.length;
        for (int i = 0; i < arraylength; i++) {
            for (int j = i + 1; j < arraylength; j++) {
                if (nums[i] + nums[j] == target) {
                    indices[0] = i;
                    indices[1] = j;
                    stop = true;
                    break;
                } // if
            } // for
            if (stop) {
                break;
            } // if
        } // for
        return indices;
    } // twoSum
} // Solution
