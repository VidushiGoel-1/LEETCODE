class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.size();
        int m = needle.size();

        // Check every possible starting position
        for (int i = 0; i <= n - m; i++) {

            int j = 0;

            // Compare characters of both strings
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }

            // If all characters matched
            if (j == m) {
                return i;
            }
        }

        // Needle was not found
        return -1;
    }
};