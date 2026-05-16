/*My approch brute force again*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        vector<int> temp;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] != val) {
                temp.push_back(nums[i]);
            }
        }

        for(int i = 0; i < temp.size(); i++) {
            nums[i] = temp[i];
        }

        return temp.size();
    }
};

/*
Brute Force and the arrpoch GPT showed as optimal had the same results somehow same memory consumption and same runtime
tho it is optimal one since it used two pointer instead of an extra array and saved space
*/

/*Optimal/GPT solution*/

/*
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int k = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] != val) {

                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
*/
