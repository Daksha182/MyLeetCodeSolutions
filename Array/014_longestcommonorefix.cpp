/*My Approch fking brute force check everything*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string result = "";

        for(int i = 0; i < strs[0].length(); i++) {

            char current = strs[0][i];

            for(int j = 1; j < strs.size(); j++) {

                if(i >= strs[j].length() || strs[j][i] != current) {
                    return result;
                }
            }

            result += current;
        }

        return result;
    }
};

/*Humilated by GPT again when asked to help me in improving the code
Same runtime but the AI solution is better when comparaing to how much better the solution is to other people
*/

/*Better Solution*/
/*
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];

        string ans = "";

        for(int i = 0; i < min(first.length(), last.length()); i++) {

            if(first[i] != last[i]) {
                break;
            }

            ans += first[i];
        }

        return ans;
    }
};
*/
