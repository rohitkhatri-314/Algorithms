# Merge Sort Algorithm Implementation

## Overview
This repository contains a C++ implementation of the Merge Sort algorithm, which efficiently sorts elements in O(n log n) time complexity using a divide-and-conquer approach.


## Implementation Details
- Uses temporary vectors during the merge phase
- Handles array indices carefully to avoid overflow
- Implements proper boundary conditions
- Follows standard divide-and-conquer methodology

## How It Works
1. The algorithm divides the input array into two halves
2. Recursively sorts each half
3. Merges the two sorted halves back together

## Performance Characteristics
- Time Complexity: O(n log n) in all cases
- Space Complexity: O(n) due to temporary storage
- Stable: Yes (maintains relative order of equal elements)

## Usage
1. Include the code in your C++ project
2. Prepare your data in a vector<int> container
3. Call mergesort() with:
   - Your vector reference
   - Starting index (typically 0)
   - Ending index (size-1)


Note: For small arrays, simpler algorithms like insertion sort may be more efficient due to lower constant factors.
