class Solution {
public:
    bool isPowerOfThree(int n) {
        bool output = false;
        int cnt = 0;
        int curr = n;
        int rem = 0;
        
        if (curr == 1) output = true; // if

        
        while (rem == 0 & curr > 1) {
            rem = curr%3;   // get remainder
            curr = curr/3;  // quotient
            cnt++;
            cout << "remainder: " << rem << endl;
            cout << "quotient: " << curr << endl;
            cout << "counter: " << cnt << endl;
        } // while
        
        if (rem == 0 & cnt != 0) output = true; // if
        
        return output;        
    }
};
