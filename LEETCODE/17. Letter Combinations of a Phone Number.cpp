// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

// Example 1:

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
// Example 2:

// Input: digits = ""
// Output: []
// Example 3:

// Input: digits = "2"
// Output: ["a","b","c"]

class Solution
{
public:
    void recur(string digits, vector<string> &x, int ind, string output, string *map)
    {

        if (ind >= digits.length())
        {
            x.push_back(output);
            return;
        }

        int n = digits[ind] - '0';
        string st = map[n];

        for (int i = 0; i < st.length(); i++)
        {
            output.push_back(st[i]);
            recur(digits, x, ind + 1, output, map);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> x;
        if (digits == "")
        {
            return x;
        }

        int ind = 0;
        string output = "";
        string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        recur(digits, x, ind, output, map);
        return x;
    }
};