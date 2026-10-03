## Problem: Move Zeroes (Easy - Bubble Sort Variant)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a Bubble Sort-like approach by comparing adjacent elements. If a zero is found followed by a non-zero element, they are swapped. This bubbles all the zeros gradually to the end of the array.

### Complexity
- Time: $O(N^2)$ in the worst case due to nested iteration.
- Space: $O(1)$ since sorting/rearranging is done in-place.

### Notes
Explored an alternative sorting-based variant to move zeros, though a single-pass two-pointer approach is more optimal for time complexity.