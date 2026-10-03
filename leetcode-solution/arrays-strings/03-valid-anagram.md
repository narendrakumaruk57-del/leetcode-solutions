## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Used a frequency array of size 26 to count the occurrences of each character. Incremented the count for characters in string `s` and decremented for string `t`. Finally, verified if all frequency counts returned to zero.

### Complexity
- Time: $O(N)$ where $N$ is the length of the string.
- Space: $O(1)$ since the frequency array size is fixed at 26 (for lowercase English letters).

### Notes
Learned how to use a hash table / frequency array technique to efficiently compare character counts without sorting.