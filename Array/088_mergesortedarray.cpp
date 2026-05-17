/*My aprroach was to sort them after directly adding them*/
/*Here is the code*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }

        sort(nums1.begin(), nums1.end());
    }
};

/*This got submitted*/

/*Here is the GPT approach*/
/*This is a triple pointer approach*/

/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while(i >= 0 && j >= 0) {

            if(nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }

            else {
                nums1[k] = nums2[j];
                j--;
            }

            k--;
        }

        while(j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
*/


/*
Although the end result of both result was more or less the same somehow but
during the the submission test case the GPT one results came back slightly faster I guess sorting them after merging them overhead from that is pretty big
Me begin DUMB i totaly ignored the MERHE SORTED ARRAY title of the question not that it would help me in getting it correct on the first try i still would have
gotten it wrong or maybe added an even bigger overhead then it already has
*/
