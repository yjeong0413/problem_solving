class Solution {
public:
    int lengthOfLastWord(string s) {

        istringstream myString(s); // split string by spaces
        string word; // store the words
        
        while (myString) {
            myString >> word;  // streaming
//            cout << word << endl;
        }
//       cout << "last word: " << word << endl;        
        return word.size();
    }
};
