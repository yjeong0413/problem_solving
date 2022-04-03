class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int numsLength = nums.size();
        int cnt1 = 0;
        int cnt2 = 0;
        
        if (numsLength > 1) {
            for (int i = 0; i < numsLength; i++){
                if (nums[i] == 0 && nums[cnt2] == 0) {
                    if (cnt2 < numsLength -1) cnt2++;
                    if (nums[cnt2] != 0) {
                        int temp = nums[cnt1];
                        nums[cnt1] = nums[cnt2];
                        nums[cnt2] = temp;
                        cnt1++;
                        if (cnt2 < numsLength -1) cnt2++;                                      
                    } // if
                } else if (nums[i] == 0 && nums[cnt2] != 0) {
                    int temp = nums[cnt1];
                    nums[cnt1] = nums[cnt2];
                    nums[cnt2] = temp;
                    cnt1++;
                    if (cnt2 < numsLength -1) cnt2++;                  
                } else {
                    cnt1++;
                    if (cnt2 < numsLength -1) cnt2++;
                } // if-else
                cout << "cnt1: " << cnt1  << ", cnt2: " << cnt2 << endl;

                //if (cnt2 > numsLength-1) break;
            } // for
        } // if
        
    } // moveZeros
}; // Solution
