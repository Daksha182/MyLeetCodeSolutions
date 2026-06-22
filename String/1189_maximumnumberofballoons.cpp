/*I am going to count the instances of every character it is the most concrete way of getting answer
"balloon" has 1 "b""a""n" 2"l""o" so counting every instance and which ever has the lowest value will be returned*/
/*In case any there will be a missing character the default value will be 0 hence 0 possibility*/

/*Here is the code*/
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b = 0;
        int a = 0;
        int l = 0;
        int o = 0;
        int n = 0;
        for(char c : text)
        {
            if(c == 'b') b++;
            else if(c == 'a') a++;
            else if(c == 'l') l++;
            else if(c == 'o') o++;
            else if(c == 'n') n++;
        }
        l /= 2;
        o /= 2;
        return min({b, a, l, o, n});
    }
};

/*Hmm the concept is almost same but the diffrence is in implementation GPT used frequency 
Hah I got to know about it yesterday but still didn't think of using it -_-*/
/*Here is the code*/

/*
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26, 0);
        for(char c : text)
        {
            freq[c - 'a']++;
        }
        return min({
            freq['b' - 'a'],
            freq['a' - 'a'],
            freq['l' - 'a'] / 2,
            freq['o' - 'a'] / 2,
            freq['n' - 'a']
        });
    }
};
*/
