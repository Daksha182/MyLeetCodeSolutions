/*My approach again extra array*/

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
Two pointer shined here the my runtime was 1ms two pointer had 0ms so i guess 100%better than mine ig
*/

/*Two Pointer Solution*/

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
