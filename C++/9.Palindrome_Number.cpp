class Solution {
    public boolean isPalindrome(int x) {
        boolean ispalindrome = true;
        String integer = Integer.toString(x); // convert integer to string
        String[] intArray = new String[integer.length()]; // make string array
        String[] intArrayReverse = new String[integer.length()]; // make string array
        for (int i = 0; i < integer.length(); i++){ // fill in string array
            intArray[i] = integer.substring(i, i+1);
            intArrayReverse[i] = integer.substring(integer.length() - i - 1, integer.length() - i);
        } // for
        for (int j = 0; j < integer.length(); j++) {
            if (!intArray[j].equals(intArrayReverse[j])) {
                ispalindrome = false;
                break;
            } // if
        } // for
        return ispalindrome;
    } // isPalindrome
} // Solution
