
---

### 💡 Problem: Next Greater Element in an Array

The goal of this code is to find the **Next Greater Element (NGE)** for each element in the given array. For every element, we want to find the next element on its right which is greater than it. If no such element exists, we place -1 for that index.

---

### 🧠 Approach Used: Monotonic Stack (Increasing Stack)

We use a **monotonic stack** (a stack that maintains elements in a specific order, here increasing order by index value) to efficiently keep track of elements whose next greater element hasn't been found yet.

---

### 🧭 Steps in the Algorithm

1. Initialize a result array of the same size as input, filled with -1. This array will hold the next greater elements.

2. Create an empty stack to store indices. The stack is used to track elements for which we haven’t yet found the next greater element.

3. Iterate through the input array from left to right.

4. For each element:

   * While the stack is not empty and the current element is greater than the element at the index on top of the stack:

     * Pop the index from the stack.
     * Set the result for that index as the current element (because we've now found a greater element).
   * Push the current index onto the stack.

5. After the loop ends, all elements still in the stack have no next greater element, so their result remains -1.

6. Finally, return the result array.

---

### 🕒 Time Complexity

The time complexity is **O(n)**, where n is the number of elements in the array.

Each element is pushed to the stack once and popped at most once, so the total number of stack operations is linear.

---

### 📦 Space Complexity

The space complexity is **O(n)** for:

* The result array of size n.
* The stack that in the worst case may hold up to n indices.

---

### 🛠 Tools and Concepts Used

* **C++ STL stack** for maintaining indices.
* **Greedy and Monotonic Stack technique** to keep track of candidates for next greater elements.
* Efficient traversal in a single pass using stack mechanics.

---

