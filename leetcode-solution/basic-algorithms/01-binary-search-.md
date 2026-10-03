## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Used an iterative binary search algorithm by maintaining `left` and `right` pointers. In each step, calculated the middle index to divide the search space in half, comparing the middle element with the target.

### Complexity
- Time: $O(\log N)$
- Space: $O(1)$

### Notes
Learned how to efficiently search for elements in a sorted array by reducing the search range logarithmically.