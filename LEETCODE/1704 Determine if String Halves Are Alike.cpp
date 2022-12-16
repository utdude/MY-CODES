// You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

// Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

// Return true if a and b are alike. Otherwise, return false.

 

// Example 1:

// Input: s = "book"
// Output: true
// Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.
// Example 2:

// Input: s = "textbook"
// Output: false
// Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
// Notice that the vowel o is counted twice.

class Solution {
public:
    bool halvesAreAlike(string s) {
        int p1=0,p2=s.size()-1;
        int count1=0,count2=0;

        while(p1 < p2){
            if(s[p1] == 'a' || s[p1] == 'e' || s[p1] == 'i' || s[p1] == 'o' || s[p1] == 'u' || s[p1] == 'A' || s[p1] == 'E' || s[p1] == 'I' || s[p1] == 'O' || s[p1] == 'U')
            count1++;
            if(s[p2] == 'a' || s[p2] == 'e' || s[p2] == 'i' || s[p2] == 'o' || s[p2] == 'u' || s[p2] == 'A' || s[p2] == 'E' || s[p2] == 'I' || s[p2] == 'O' || s[p2] == 'U')
            count2++;
            p1++;
            p2--;
        }

        if(count1 == count2)
        return true;
        else
        return false;
    }
};