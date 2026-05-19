/*Well shit too long time to implement the brute force way and it didn't got accepted in the end*/
/*Well i did have the idea of what to do turns out I cant implement it way to go and the things i forgot are dumb ones too*/
/*Here is the solution anyways*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        for(int i = 0; i < height.size(); i++) {
            for(int j = i + 1; j < height.size(); j++) {
                int width = j - i;
                int h = min(height[i], height[j]);
                int area = width * h;
                maxWater = max(maxWater, area);
            }
        }
        return maxWater;
    }
};

/*Here is the GPT Solution*/
/*Not too much to write except I dont know how to properly implement two pointer properly still*/
/*
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;
        while(left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);
            int area = width * h;
            maxWater = max(maxWater, area);
            if(height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return maxWater;
    }
};
*/
