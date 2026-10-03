## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Used a Stack data structure to keep track of opening brackets. When a closing bracket is encountered, checked if it matches the top of the stack. If it matches, popped the element; otherwise, returned false.

### Complexity
- Time: $O(N)$ where $N$ is the length of the string.
- Space: $O(N)$ in the worst case for storing characters in the stack.

### Notes
Learned how Last-In-First-Out (LIFO) property of stacks is ideal for matching nested symbols.