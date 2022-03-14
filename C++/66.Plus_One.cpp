class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int digitsLength = digits.size();
            //std::cout << digitsLength;

            for (int i = digitsLength-1; i>=0; i--) {
                if (digits[i] != 9) {
                    digits[i] = digits[i] + 1; 
                    break;
                } else {
                    digits[i] = 0;
                    if (i == 0) {
                        digits.insert(digits.begin(), 1);
                    } // if-else
                } // if-else
            } //for

            return digits;
        } // plusOne
};
