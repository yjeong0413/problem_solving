class Solution {
public:
    int firstUniqChar(string s) {
        int output = -1;
        int sLength = s.length();
        int sArray[sLength];
        
        for (int i = 0; i < sLength; i++) {
            int cnt = 0;
            for (int j = 0; j < sLength; j++) {
                if (s[i] == s[j]) cnt++;
            }  // for-j
            sArray[i] = cnt;
            //cout << cnt << endl;
        }  // for-i
        
        for (int k = 0; k< sLength; k++) {
            if (sArray[k] == 1) {
                output = k;
                break;
            } // if
        } // for-k
        
        return output;
    }  // firstUniqChar
};
