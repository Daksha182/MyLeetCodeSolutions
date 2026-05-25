/*My approach is to use two pointers one for haystack
and one for needle and keep comparing them until the
needle is found in the haystack*/


/*GPT refined the code my solution took 5ms in runtime this one was 0ms*/


class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        for(int i = 0; i <= n - m; i++) {
            int j = 0;
            while(j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if(j == m) {
                return i;
            }
        }
        return -1;
    }
};
