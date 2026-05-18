/*Gotta do something about brute forcing my way on every damn question did 2 question today both got wrong failed the test cases available before submission*/
/*I don't remember why i thought it was a good idea to try and doing it manually and put condition to check the values in array then make a diffrent array of singular value, then try to build a tree*/

/*Here is the GPT solution*/

class Solution {
public:

    TreeNode* build(vector<int>& nums, int left, int right) {

        if(left > right) {
            return NULL;
        }

        int mid = left + (right - left) / 2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = build(nums, left, mid - 1);

        root->right = build(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {

        return build(nums, 0, nums.size() - 1);
    }
};
