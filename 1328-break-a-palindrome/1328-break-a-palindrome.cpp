class Solution {
public:
    string breakPalindrome(string palindrome) {
          int n = palindrome.size();          // Get the size of the string
        if (n <= 1) return "";              // If size is 1, return an empty string

        for (int i = 0; i < n / 2; ++i) {  // Iterate through the first half of the string
            if (palindrome[i] != 'a') { // Check for non-'a' letters
                palindrome[i] = 'a';        // Replace it with 'a'
                return palindrome;           // Return the modified string
            }
        }

        // If all characters in the first half are 'a' or if it consists of all identical characters (including digits)
        palindrome.pop_back();               // Remove the last character
        palindrome += 'b';                   // Append 'b' to ensure it's not a palindrome
        return palindrome;  

    }
};