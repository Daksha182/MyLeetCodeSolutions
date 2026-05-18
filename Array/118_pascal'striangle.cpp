/*Again wasted resources by making unnecessary array passed the test cases before submission but failed on the thrid test case of submission somehow*/
/*No Need for any extra info it is just my DUMB ASS to ignore things and do things in a very DUMB way*/
/*Here is the GPT solution*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> triangle;

        for(int i = 0; i < numRows; i++) {

            vector<int> row(i + 1, 1);

            for(int j = 1; j < i; j++) {

                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            triangle.push_back(row);
        }

        return triangle;
    }
};
