/*Well Again with following to the dot approch dont wander anywhere else*/
/*Question asked the the maximum possible value and we can arrange it
any number of time and can only decrease the value at any given index not increase
and first element has be alway 1*/
/*So sort the array first i used the inbuit function here then make the first element 1
no matter what then from next element put a loop where min(current index, pervious+1)*/
/*Here is the code*/
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        arr[0] = 1;
        for(int i = 1; i < arr.size(); i++)
        {
            arr[i] = min(arr[i], arr[i - 1] + 1);
        }
        return arr.back();
    }
};

/*Okay this was one incredible operation chatgpt did it removed the sorting completely*/
/*The trick was the maximum element can never exceed the size of array so made a variable that
denotes the size of array and one that is initialized to 0 then started a for loop
with the condition of ans = min(ans + freq[i], i) this make only two traversal in the array hance O(n) complexity*/
/*Here is the code*/
/*
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        vector<int> freq(n + 1,0);
        for(int i =0;i<n;i++){
            freq[min(arr[i],n)]++;
        }
        int ans = 0;
        for(int i =1;i<=n;i++){
            if(freq[i] == 0) continue;

            ans = min(ans + freq[i],i);
        }
        return ans;
    }
};
*/
/*This is something I can't think of yet well just hope with continued practice I can acheive to do the same*/
