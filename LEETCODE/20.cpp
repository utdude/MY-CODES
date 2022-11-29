// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true

class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        
        if(s.length() < 2)
            return false;
        
        
        for(char i: s){
            
            if(i == '(')
                x.push('(');
            else if(i == '[')
                x.push('[');
            else if(i == '{')
                x.push('{');
            
            else if(i == '}' && !x.empty()){
                if(x.top() == '{')
                    x.pop();
                else
                    return false;
            }
            else if(i == ']' && !x.empty()){
                if(x.top() == '[')
                    x.pop();
                else
                    return false;
            }
            else if(i == ')' && !x.empty()){
                if(x.top() == '(')
                    x.pop();
                else
                    return false;
            }else{
                return false;
            }
                
        }
        
        if(x.empty())
        return true;
        
    return false;
    }
};