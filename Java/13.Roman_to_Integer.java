class Solution {
    public int romanToInt(String inputString) {

        int outputNum = 0;
        int inputLength = inputString.length();
        char[] inputCharacter = new char[inputLength]; // create an empty array

        for (int i = inputLength-1; i >= 0; i--) {
            inputCharacter[i] = inputString.charAt(i); // fill in empty array
        } // for

        for (int i = 0; i < inputLength ; i++){
            if (inputCharacter[i] == 'I'){
                outputNum += 1;
            } else if (inputCharacter[i] == 'V'){
                if (i-1 >= 0 && inputCharacter[i-1] == 'I'){
                    outputNum += 3;
                } else{
                    outputNum += 5;
                }
            } else if (inputCharacter[i] == 'X'){
                if (i-1 >= 0 && inputCharacter[i-1] == 'I'){
                    outputNum += 8;
                } else{
                    outputNum += 10;
                }
            } else if (inputCharacter[i] == 'L'){
                if (i-1 >= 0 && inputCharacter[i-1] == 'X'){
                    outputNum += 30;
                } else {
                    outputNum += 50;
                }
            } else if (inputCharacter[i] == 'C'){
                if (i-1 >= 0 && inputCharacter[i-1] == 'X'){
                    outputNum += 80;
                } else {
                    outputNum += 100;
                }
            } else if (inputCharacter[i] == 'D'){
                if (i-1 >= 0 && inputCharacter[i-1] == 'C'){
                    outputNum += 300;
                } else {
                    outputNum += 500;
                }
            } else{
                if (i-1 >= 0 && inputCharacter[i-1] == 'C'){
                    outputNum += 800;
                } else {
                    outputNum += 1000;
                }
            }
        } // for

        return outputNum;
    } // romanToInt
} // Solution

