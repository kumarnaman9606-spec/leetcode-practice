### 0344. Reverse String *(Easy)*

- **Language:** C
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

#### Approach
- Use two pointers:
  - `left` starts at the beginning.
  - `right` starts at the end.
- Swap the characters at `left` and `right`.
- Move `left` forward and `right` backward.
- Continue until the pointers meet.

This reverses the string **in-place** without using any extra array.
