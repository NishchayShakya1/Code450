class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
         int index = upper_bound(letters.begin(), letters.end(), target) - letters.begin();
        return index >= letters.size() ? letters[0] : letters[index];
    }
};