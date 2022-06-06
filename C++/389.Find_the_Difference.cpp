class Solution {
public:
    char findTheDifference(string s, string t) {
        
        // sort string s and string t
        sort(s.begin(), s.end());
        //cout << s << endl;
        sort(t.begin(), t.end());
        //cout << t << endl;
        
        // compare one character by one character
        char output = t[t.size()-1];
        for (int i = 0; i < t.size()-1; i++) {
            if (t[i]!=s[i]) {
                output = t[i];
                break;
            }  // if
        }   // for-i
              
        
        return output;
    }  // findTheDifference
};
