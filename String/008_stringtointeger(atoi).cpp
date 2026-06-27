/*My approch is basic the follow the instruction as closely as possible*/
/*Instruction*/
/*
The algorithm for myAtoi(string s) is as follows:
    Whitespace: Ignore any leading whitespace (" ").
    Signedness: Determine the sign by checking if the next character is '-' or '+', assuming positivity if neither present.
    Conversion: Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
    Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then round the integer to remain in the range. Specifically, integers less than -231 should be rounded to -231, and integers greater than 231 - 1 should be rounded to 231 - 1.
Return the integer as the final result.
*/
/*WhiteSpaces a while loop that will push the pointer forward until it finds the non zero character*/
/*Signedness sign declare positive(1) by default an if condition to check it will change if '-'*/
/*Conversion when printing the final answer they are automatically eleminated*/
/*Rounding using the c++ default values returning that when exceeding*/

/*Here is the code*/

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long ans = 0;
        while(i < s.size() && s[i] == ' ')
            i++;
        if(i < s.size() && s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if(i < s.size() && s[i] == '+')
        {
            i++;
        }
        for(; i < s.size(); i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                int digit = s[i] - '0';
                ans = ans * 10 + digit;
                if(sign * ans > INT_MAX)
                    return INT_MAX;
                if(sign * ans < INT_MIN)
                    return INT_MIN;
            }
            else
            {
                break;
            }
        }
        return sign * ans;
    }
};

/*GPT says this the desired approch but not the optimal here is the GPT code with comments where the changes are*/

/*
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long ans = 0;
        // Skip leading spaces
        while (i < s.size() && s[i] == ' ')
            i++;
        // Check sign
        if (i < s.size() && (s[i] == '+' || s[i] == '-'))
        {
            if (s[i] == '-')
                sign = -1;
            i++;
        }
        // Read digits
        while (i < s.size() && isdigit(s[i]))
        {
            int digit = s[i] - '0';
            // Overflow check
            if (ans > INT_MAX / 10 ||
                (ans == INT_MAX / 10 && digit > 7))
            {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            ans = ans * 10 + digit;
            i++;
        }
        return sign * ans;
    }
};
*/
