This code finds the missing number using **cyclic sort** logic.

**Explanation**:
It rearranges elements in-place so that each number is at its correct index (e.g., 3 at index 3). It uses a while loop to swap elements until each number is either out of bounds or already in the right place. After that, it checks which index doesn't match the value — that index is the missing number. If all values are at correct positions, the missing number is `n`.

**Time Complexity**: O(n) — Each element is moved at most once.
**Space Complexity**: O(1) — It uses constant extra space (in-place sorting).
