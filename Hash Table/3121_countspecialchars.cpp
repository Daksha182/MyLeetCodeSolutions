/*My approach is to use islower and isupper again but this time i am also comparing the indexes
first I make an array to store the indexes for both then the condition is satisfied then i compare the indexes*/

/*Here is the solution*/

class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lastLower(26, -1);
        vector<int> firstUpper(26, -1);
        for(int i = 0; i < word.size(); i++) {
            char c = word[i];
            if(islower(c)) {
                lastLower[c - 'a'] = i;
            }
            else if(isupper(c)) {
                int index = c - 'A';
                if(firstUpper[index] == -1) {
                    firstUpper[index] = i;
                }
            }
        }
        int count = 0;
        for(int i = 0; i < 26; i++) {
            if(lastLower[i] != -1 &&
               firstUpper[i] != -1 &&
               lastLower[i] < firstUpper[i]) {
                count++;
            }
        }
        return count;
    }
};
/*Here is the GPT solution it gave a Hash map solution that is supposed to be optimal but runtime of my approach is lower*/
/*
class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int> lastLower;
        unordered_map<char, int> firstUpper;
        int n = word.size();
        for(int i = 0; i < n; i++) {
            char c = word[i];
            if(islower(c)) {
                lastLower[c] = i;
            }
            else {
                char lower = tolower(c);
                if(firstUpper.find(lower) == firstUpper.end()) {
                    firstUpper[lower] = i;
                }
            }
        }
        int count = 0;
        for(char c = 'a'; c <= 'z'; c++) {
            if(lastLower.count(c) &&
               firstUpper.count(c) &&
               lastLower[c] < firstUpper[c]) {
                count++;
            }
        }
        return count;
    }
};
*/
