class Solution {
    public int removeElement(int[] nums, int val) {
        int numsLength = nums.length;
        int temp = numsLength;

        for (int i = 0; i < numsLength; i++){
            // System.out.println(i +", "+numsLength + ", "+ nums[i]);
            if (nums[i] == val){
                for (int j = i; j < numsLength-1; j++){
                    nums[j] = nums[j+1];
                } // for
                numsLength -= 1;
                i = -1;
            } // if
        } // for
        //for (int i=0; i < temp; i++){
        //    System.out.println(nums[i]);
        //} // for
        return numsLength;
    } // removeElement
} // Solution
