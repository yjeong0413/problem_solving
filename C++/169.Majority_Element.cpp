class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int numsLength = nums.size();  // length of the array
        map<int, int> myMap;  // create an empty map
        
        for (int i = 0; i < numsLength; i++){
            int cnt = 0;
            for (int j=0; j < numsLength; j++) {
                if (nums[j] == nums[i]) {
                    cnt++;
                }  // if
            }  // for-j
            pair<int, int> newPair{nums[i], cnt};  // create a pair to insert in the map. We can also do 'myMap[key] = value'.                        
            if (myMap.find(nums[i]) == myMap.end()) { // if we do not have the element in the array add it.
               myMap.insert(newPair);
            }  // if                        
        }  // for-i
         
        int output = nums[0];
        // find the max count
        for (auto it = myMap.begin(); it != myMap.end(); it++) {
            if (it->second > numsLength/2) {
                output = it->first;
            }  // if
            cout << "Key: " << it->first << ", Value: " << it->second <<endl;
        }  // for-it
        
        return output;
    } // majorityElement
}; // Solution
