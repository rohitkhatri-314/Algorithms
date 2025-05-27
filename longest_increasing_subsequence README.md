This function computes the length of the **Longest Increasing Subsequence (LIS)** in a given array of integers using **dynamic programming (DP)**.  

### **Approach**  
1. **Initialization**:  
   - A DP array `dp` is initialized where `dp[i]` represents the length of the longest increasing subsequence ending at index `i`.  
   - Since each element is a valid subsequence of length 1, `dp` is initially filled with `1`s.  

2. **Filling the DP Array**:  
   - For each element `nums[i]` (starting from the second element), the algorithm checks all previous elements `nums[j]` (where `j < i`).  
   - If `nums[j] < nums[i]`, it means `nums[i]` can extend the subsequence ending at `j`. Thus, `dp[i]` is updated to the maximum of its current value or `dp[j] + 1`.  

3. **Result Extraction**:  
   - The final result is the maximum value in the `dp` array, representing the length of the longest increasing subsequence in the entire array.  

### **Time & Space Complexity**  
- **Time Complexity**: **O(n²)** – Due to the nested loop structure.  
- **Space Complexity**: **O(n)** – For storing the DP array.  

This approach efficiently computes the LIS length by leveraging dynamic programming to avoid recomputation, making it optimal for moderately sized inputs.