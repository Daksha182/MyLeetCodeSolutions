/*Either the question should be categorized as Hard or I am just am that dumb
Took too much time on the damn question, realised the pattern in somewhere around 40min ig
And even finding the pattern didnt know how to implement it*/

/*Well here is the GPT code*/

class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows == 1)
            return s;
        vector<string> rows(numRows);
        int currentRow = 0;
        bool goingDown = true;
        for(char c : s)
        {
            rows[currentRow] += c;
            if(currentRow == 0)
                goingDown = true;
            else if(currentRow == numRows - 1)
                goingDown = false;
            if(goingDown)
                currentRow++;
            else
                currentRow--;
        }
        string result;
        for(string row : rows)
            result += row;
        return result;
    }
};

/*This is not over I shall do this again in 45 day interval*/
