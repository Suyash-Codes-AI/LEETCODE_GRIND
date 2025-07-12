class Solution {
public:
    bool isAlphanumeric(char ch) {
        return (ch >= '0' && ch <= '9') || 
               (ch >= 'a' && ch <= 'z') || 
               (ch >= 'A' && ch <= 'Z');
    }

    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;

        while (st < end) {
            // Skip non-alphanumeric characters
            while (st < end && !isAlphanumeric(s[st])) st++;
            while (st < end && !isAlphanumeric(s[end])) end--;

            // Compare characters after converting to lowercase
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            st++;
            end--;
        }
        return true;
    }
};
