/*Did my first daily question it categorized as easy difficulty*/
/*My approach was to find the first diffrence point and take all the elements after that
and make two diffrent arrays then make sure they are sorted first and take the last element
of the newly made array and first one of the orignal array if last is smaller then it is a sorted array*/

/*There is an extra condition that make sure if there is no piviot then it is sorted array by default*/

/*
EG. [4,5,1,2,3]
Then diffrence point is 5,1 so two arrays are [4,5], [1,2,3]
these are sorted now we take 3(last element of newly created array) and 4(first element of orignal array)
so 3 < 4 hence it is a valid array that is sorted
*/

/*Here is the code*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                pivot = i;
                break;
            }
        }
        if(pivot == -1) {
            return true;
        }
        for(int i = pivot + 1; i < n - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                return false;
            }
        }
        if(nums[n - 1] > nums[0]) {
            return false;
        }
        return true;
    }
};

/*Now here is the GPT solution*/

/*GPT found the pattern that if the sorted array is rotated from the piviot point once then there should be
only one diffrence point it calculates that if the diffrence point is 1 or 0 it is a valid array
if it is more than 1 then it is not a valid array*/

/*Here is the GPT solution*/

/*
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        return count <= 1;
    }
};
*/
