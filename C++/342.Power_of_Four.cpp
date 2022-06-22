class Solution {
public:
    bool isPowerOfFour(int n) {
        bool flag = false;
        int quo = n;
        int cnt = 0;
        
        while (quo > 1) {
            if (quo%2 > 0) {
                return flag;
                break;
            } else {
                cnt++;
                quo = quo/2;
            } // if-else
        }  // while
        
       if (cnt > 0 & cnt%2 == 0) {
            flag =  true;
        }  // if 

        if (cnt == 0 & n == 1) {
            flag = true;
        }  // if
        
        return flag;
    }  // isPowerOfFour
};
