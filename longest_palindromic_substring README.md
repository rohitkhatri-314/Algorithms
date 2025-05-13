# Longest Palindromic Substring Solution

## Overview
This C++ implementation finds the longest palindromic substring within a given string using an efficient expansion around center approach.

## Key Features
- Optimal O(n²) time complexity solution
- O(1) space complexity
- Handles both odd and even length palindromes
- Returns the actual longest palindrome substring

## Algorithm Approach
The solution uses a center expansion technique that:
1. Treats each character as the center of a potential palindrome
2. Expands outward to find the longest possible palindrome
3. Handles both odd-length (single center) and even-length (dual center) cases

## Implementation Details
- `helper()` function performs the center expansion
- Main function iterates through all possible centers
- Tracks the longest palindrome found
- Returns the substring using calculated indices

## Performance
- Time Complexity: O(n²) - Each of the n centers can expand up to O(n) times
- Space Complexity: O(1) - Uses constant extra space

## Usage
1. Create an instance of the Solution class
2. Call `longestPalindrome()` with your input string
3. Returns the longest palindromic substring



## Edge Cases Handled
- Empty string returns empty string
- Single character string returns itself
- Complete palindrome returns entire string
- Multiple palindromes of same length returns first occurrence

## Applications
- DNA sequence analysis
- Cryptography
- Data compression
- Natural language processing

## Potential Optimizations
- Manacher's algorithm for O(n) time complexity
- Parallel processing for very large strings
- Early termination conditions

```
